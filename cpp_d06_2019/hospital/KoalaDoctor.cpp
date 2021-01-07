//
// EPITECH PROJECT, 2020
// cpp_d06_2019
// File description:
// KoalaDoctor.cpp
//

#include "KoalaDoctor.hpp"

KoalaDoctor::KoalaDoctor(std::string name)
{
    this->name = name;
    std::cout << "Dr." << name<< ": I'm Dr." << name << "! How do you kreog?\n";
}

KoalaDoctor::~KoalaDoctor(void)
{
}

void KoalaDoctor::diagnose(SickKoala *patient)
{
    std::string report = patient->getName().append(".report");
    std::ofstream file (report);
    std::string drugs[5] = {"Mars", "Buronzand", "Viagra", "Extasy",
    "Eucalyptus leaf"};

    std::cout << "Dr." << name << ": So what's goerking you Mr."
    << patient->getName() << "?\n";
    patient->poke();
    file << drugs[random() % 5];
    file.close();
}

void KoalaDoctor::timeCheck(void)
{
    if (working) {
        std::cout << "Dr." << name
        << ": Time to go home to my eucalyptus forest!\n";
    } else
        std::cout << "Dr." << name << ": Time to get to work!\n";
    working = !working;
}

std::string KoalaDoctor::getName(void)
{
    return(name);
}
