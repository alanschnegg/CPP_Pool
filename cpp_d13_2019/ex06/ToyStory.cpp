//
// EPITECH PROJECT, 2020
// cpp_d13_2019
// File description:
// ToyStory.cpp
//

#include "ToyStory.hpp"

void ToyStory::tellMeAStory(std::string filename, Toy &toy1, bool (Toy::*func1)(std::string), Toy &toy2, bool (Toy::*func2)(std::string))
{
    std::string line;
    std::ifstream fd(filename);
    bool turn1 = true;
    Toy *currentToy;
    bool isError;

    if (!fd.is_open()) {
        std::cout << "Bad Story" << std::endl;
        return;
    }
    std::cout << toy1.getAscii() << std::endl << toy2.getAscii() << std::endl;
    while (getline (fd,line)) {
        currentToy = (turn1 == true) ? &toy1 : &toy2;
        if (line.compare("picture:") > 0) {
            line.erase(line.begin(), line.begin() + 8);
            if (currentToy->setAscii(line) == false) {
                std::cerr << currentToy->getLastError().where() << ": " << currentToy->getLastError().what() << std::endl;
                return;
            }
            std::cout << currentToy->getAscii() << std::endl;
        } else {
            isError = (turn1 == true) ? (!(currentToy->*func1)(line)) : (!(currentToy->*func2)(line));
            if (isError == true) {
                std::cerr << currentToy->getLastError().where() << ": " << currentToy->getLastError().what() << std::endl;
                return;
            }
        }
        turn1 = !turn1;
    }
    fd.close();
}
