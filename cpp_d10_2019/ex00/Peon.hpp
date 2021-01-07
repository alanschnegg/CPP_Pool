//
// EPITECH PROJECT, 2020
// cpp_d10_2019
// File description:
// Peon.hpp
//

#ifndef PEON_HPP_
# define PEON_HPP_

#include "Victim.hpp"

class Peon : public Victim {
    public:
        Peon(std::string name);
        ~Peon(void);

        void getPolymorphed(void) const;
};

#endif // PEON_HPP_
