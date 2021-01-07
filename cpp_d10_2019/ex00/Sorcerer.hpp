//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// Sorcerer.hpp
//

#ifndef SORCERER_HPP_
# define SORCERER_HPP_

#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer {
    public:
        Sorcerer(std::string name, std::string title);
        ~Sorcerer(void);

        std::string getName(void) const;
        std::string getTitle(void) const;

        void polymorph(const Victim &victim) const;
    private:
        std::string _name;
        std::string _title;
};

std::ostream &operator<<(std::ostream &s, const Sorcerer &sorcerer);

#endif // SORCERER_HPP_
