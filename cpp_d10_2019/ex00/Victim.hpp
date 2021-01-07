//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// Victim.hpp
//

#ifndef VICTIM_HPP_
# define VICTIM_HPP_

#include <iostream>

class Victim {
    public:
        Victim(std::string name);
        ~Victim(void);

        std::string getName(void) const;

        virtual void getPolymorphed(void) const;
    protected:
        std::string _name;
};

std::ostream &operator<<(std::ostream &s, const Victim &victim);

#endif // VICTIM_HPP_
