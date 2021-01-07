//
// EPITECH PROJECT, 2020
// cpp_d07a_2019
// File description:
// Skat.hpp
//

#ifndef SKAT_HPP_
# define SKAT_HPP_

#include <string>
#include <iostream>

class Skat
{
    public:
        Skat(const std::string &name = "bob", int stimPaks = 15);
        ~Skat();
        int &stimPaks();
        int &stimPaks(int stim);
        const std::string &name();
        void shareStimPaks(int number, int &stock);
        void addStimPaks(unsigned int number);
        void useStimPaks(void);
        void status(void);
        private:
            std::string _name;
            int _stimPaks;
};

#endif // SKAT_HPP_
