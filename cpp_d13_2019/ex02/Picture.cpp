//
// EPITECH PROJECT, 2020
// cpp_d13_2019
// File description:
// Picture.cpp
//

#include "Picture.hpp"

Picture::Picture(const std::string &file = "")
{
    std::string line;
    std::ifstream fd(file);

    if (fd.is_open()) {
        data = "";
        while (getline (fd,line)) {
            data.append(line);
            data.append("\n");
        }
        fd.close();
    } else {
        data = "ERROR";
    }
}

Picture::Picture(const Picture &copy)
{
    data = copy.data;
}

void Picture::operator=(const Picture &copy)
{
    data = copy.data;
}

bool Picture::getPictureFromFile(const std::string &file)
{
    std::string line;
    std::ifstream fd(file);

    if (fd.is_open()) {
        data = "";
        while (getline (fd,line)) {
            data.append(line);
            data.append("\n");
        }
        fd.close();
    } else {
        data = "ERROR";
        return (false);
    }
    return (true);
}
