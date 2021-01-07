//
// EPITECH PROJECT, 2020
// cpp_d14a_2019
// File description:
// SimplePtr.cpp
//

#include "SimplePtr.hpp"

SimplePtr::SimplePtr(BaseComponent *rawPtr) : _rawPtr(rawPtr)
{
}

SimplePtr::~SimplePtr()
{
    delete _rawPtr;
}

BaseComponent *SimplePtr::get() const
{
    return (_rawPtr);
}

SimplePtr::SimplePtr(SimplePtr const &ptr)
{
}

SimplePtr &SimplePtr::operator=(SimplePtr const &ptr)
{
    return (*this);
}
