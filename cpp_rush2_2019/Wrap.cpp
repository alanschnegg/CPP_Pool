//
// EPITECH PROJECT, 2020
// cpp_rush2_2019
// File description:
// Wrap.cpp
//

#include "Wrap.hpp"

void Box::wrapMeThat(Object *obj)
{
    if (_isOpen == true && _wrapped == nullptr) {
        _wrapped = obj;
        std::cout << "tuuuut tuuut tuut\n";
    } else if (_isOpen == true)
        std::cerr << "Box already contain an object\n";
    else
        std::cerr << "Box is not open\n";
}

void GiftPaper::wrapMeThat(Object *obj)
{
    if (_wrapped == nullptr) {
        _wrapped = obj;
        std::cout << "tuuuut tuuut tuut\n";
    } else
        std::cerr << "Box already contain an object\n";
}

void Wrap::openMe(void)
{
    if (_isOpen == true)
        std::cerr << "Box is already opened\n";
    else {
        _isOpen = true;
        std::cout << "Box is now opened\n";
    }
}

void Wrap::closeMe(void)
{
    if (_isOpen == false)
        std::cerr << "Box is already closed\n";
    else {
        _isOpen = false;
        std::cout << "Box is now closed\n";
    }
}

Object *Wrap::getObj(void)
{
    Object *tmp;
    if (_isOpen == true && _wrapped != nullptr) {
        tmp = _wrapped;
        std::cout << "* whistles while working *\n";
        _wrapped = nullptr;
        return (tmp);
    } else if (_wrapped == nullptr) {
        std::cerr << "Box is empty\n";
        return (nullptr);
    }
    std::cerr << "Box is not open\n";
    return (nullptr);
}

bool Wrap::isEmpty(void) const
{
    if (_wrapped == nullptr)
        return (true);
    return (false);
}
