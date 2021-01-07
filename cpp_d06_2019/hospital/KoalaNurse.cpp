//
// EPITECH PROJECT, 2020
// cpp_d06_2019
// File description:
// KoalaNurse.cpp
//

#include "KoalaNurse.hpp"

KoalaNurse::KoalaNurse(int id)
{
    this->id = id;
    this->working = false;
}

KoalaNurse::~KoalaNurse(void)
{
    std::cout << "Nurse " << id << ": Finally some rest!\n";
}

void KoalaNurse::giveDrug(std:: string drug, SickKoala *patient)
{
    patient->takeDrug(drug);
}

std::string KoalaNurse::readReport(std::string filename)
{
    std::ifstream file (filename.c_str());
    std::string drug;

    filename.erase(filename.end() - 7, filename.end());
    if (file.is_open()) {
        getline(file, drug);
        std::cout << "Nurse " << id << ": Kreog! Mr." << filename << " needs a "
        << drug << "!\n";
        file.close();
        return (drug);
    }
    drug.clear();
    return (drug);
}

void KoalaNurse::timeCheck(void)
{
    if (working) {
        std::cout << "Nurse " << id
        << ": Time to go home to my eucalyptus forest!\n";
    } else
        std::cout << "Nurse " << id << ": Time to get to work!\n";
    working = !working;
}

int KoalaNurse::getID(void)
{
    return(id);
}
