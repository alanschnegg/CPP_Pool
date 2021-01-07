//
// EPITECH PROJECT, 2020
// cpp_d06_2019
// File description:
// SickKoala.cpp
//

#include "SickKoala.hpp"

SickKoala::SickKoala(std::string name)
{
    this->name = name;
}

SickKoala::~SickKoala(void)
{
    std::cout << "Mr." << name << ": Kreooogg!! I'm cuuuured!\n";
}

void SickKoala::poke(void)
{
    std::cout << "Mr." << name << ": Gooeeeeerrk!!\n";
}

bool SickKoala::takeDrug(std::string drug)
{
    if (drug.compare("Mars") == 0) {
        std::cout << "Mr." << name << ": Mars, and it kreogs!\n";
        return (true);
    } else if (drug.compare("Buronzand") == 0) {
        std::cout << "Mr." << name << ": And you'll sleep right away!\n";
        return (true);
    }
    std::cout << "Mr." << name << ": Goerkreog!\n";
    return (false);
}

void SickKoala::overDrive(std::string sentence)
{
    while (sentence.find("Kreog!") != std::string::npos)
        sentence.replace(sentence.find("Kreog!"), 6, "1337!");
    std::cout << "Mr." << name << ": "<< sentence << "\n";
}

std::string SickKoala::getName(void)
{
    return(name);
}
