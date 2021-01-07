//
// EPITECH PROJECT, 2020
// cpp_d16_2019
// File description:
// Parser.hpp
//

#ifndef PARSER_HPP_
# define PARSER_HPP_

#include <string>
#include <sstream>
#include <stack>
#include <iostream>

class Parser {
    public:
        Parser() : _result(0) {}
        ~Parser() {}

        void feed(const std::string &);
        int result(void) const { return (_result); }
        void reset(void) { _result = 0; }
    private:
        int _result;
        std::stack<char> _operator;
        std::stack<int> _operands;
};

#endif // PARSER_HPP_
