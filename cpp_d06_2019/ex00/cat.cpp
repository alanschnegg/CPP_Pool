//
// EPITECH PROJECT, 2020
// cpp_d06_2019
// File description:
// cat.cpp
//

#include <fstream>
#include <iostream>

void display_file(char *filename)
{
    std::string line;
    std::ifstream file (filename);

    if (file.is_open()) {
        while (getline (file,line)) {
          std::cout << line << '\n';
        }
        file.close();
    } else
        std::cerr << "my_cat: " << filename << ": No such file or directory"
        << '\n';
}
