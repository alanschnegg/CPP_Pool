//
// EPITECH PROJECT, 2020
// cpp_d16_2019
// File description:
// BF_Translator.cpp
//

#include "BF_Translator.hpp"

BF_Translator::BF_Translator()
{
    _translate['>'] = "++ptr;";
    _translate['<'] = "--ptr;";
    _translate['+'] = "++*ptr;";
    _translate['-'] = "--*ptr;";
    _translate['.'] = "write(1, ptr, 1);";
    _translate[','] = "read(0, ptr, 1);";
    _translate['['] = "while (*ptr) {";
    _translate[']'] = "}";
}

int BF_Translator::translate(const std::string &in, const std::string &out)
{
    std::ifstream filesIn(in);
    std::ofstream filesOut(out, std::ofstream::out | std::ofstream::trunc);
    std::string line;

    if (!filesIn.is_open() || !filesOut.is_open())
        return (-1);
    filesOut << "#include <stdio.h>" << std::endl;
    filesOut << "#include <unistd.h>" << std::endl;
    filesOut << "int main (void) {" << std::endl;
    filesOut << "char array[60000] = {0};" << std::endl;
    filesOut << "char *ptr=array;" << std::endl;
    while (getline(filesIn, line)) {
        for (char c : line) {
            if (c == '>' || c == '<' || c == '+' || c == '-' || c == '.' || c == ',' || c == '[' || c == ']')
                filesOut << _translate[c] << std::endl;
        }
    }
    filesOut << "return (0);" << std::endl;
    filesOut << "}" << std::endl;
    return (0);
}
