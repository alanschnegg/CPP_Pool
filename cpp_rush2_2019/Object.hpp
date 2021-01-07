//
// EPITECH PROJECT, 2020
// cpp_rush2_2019
// File description:
// Object.hpp
//

#ifndef OBJECT_HPP_
# define OBJECT_HPP_

#include <string>

class Object {
    public:
        Object(std::string title = "") : _title(title) {}
        ~Object (void) {}

        virtual void isTaken() const = 0;
        std::string getTitle(void) const { return (_title); }
    protected:
        std::string _title;
};

Object **MyUnitTests(void);

#endif // OBJECT_HPP_
