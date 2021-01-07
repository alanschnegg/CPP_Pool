//
// EPITECH PROJECT, 2020
// cpp_d16_2019
// File description:
// Ratatouille.hpp
//

#ifndef RATATOUILLE_HPP_
# define RATATOUILLE_HPP_

#include <sstream>
#include <iostream>

class Ratatouille {
    public:
        Ratatouille () {}
        Ratatouille(Ratatouille  const &other) { _cooking_pot << other.kooc(); }
        ~Ratatouille () {}
        Ratatouille &operator=(const Ratatouille &other) { _cooking_pot.str(""); _cooking_pot << other.kooc(); return (*this); }

        Ratatouille &addVegetable(unsigned char c) { _cooking_pot << c; return (*this); }
        Ratatouille &addCondiment(unsigned int i) { _cooking_pot << i; return (*this); }
        Ratatouille &addSpice(double d) { _cooking_pot << d; return (*this); }
        Ratatouille &addSauce(const std::string &str) { _cooking_pot << str; return (*this); }

        std::string kooc() const { return (_cooking_pot.str()); }
    private:
        std::ostringstream _cooking_pot;
};

#endif // RATATOUILLE_HPP_
