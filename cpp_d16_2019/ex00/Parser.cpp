//
// EPITECH PROJECT, 2020
// cpp_d16_2019
// File description:
// Parser.cpp
//

#include "Parser.hpp"

static bool check_par(std::string &op)
{
    int par = 0;
    size_t i = 0;

    if (op[0] != '(')
        return (true);
    for (; i < op.size(); i++) {
        if (op[i] == '(') {
            par++;
        } else if (op[i] == ')') {
            par--;
            if (par == 0 && i == op.size() - 1) {
                op.erase(op.begin());
                op.erase(op.size() - 1);
                return (false);
            } else if (par == 0)
                return (true);
        }
    }
    return (true);
}

static int calc_op(int a, int b, char operand)
{
    if (operand == '+') {
        return (a + b);
    } else if (operand == '-') {
        return (a - b);
    } else if (operand == '*') {
        return (a * b);
    } else if (operand == '/') {
        return (a / b);
    } else if (operand == '%') {
        return (a % b);
    }
    return (0);
}

static int calcul(std::string &op)
{
    std::string str_tmp;
    int int_tmp1;
    int int_tmp2;
    int par;
    char operand;
    size_t i = 0;

    for (; i < op.size(); i++) {
        str_tmp.clear();
        par = 0;
        if (op[i] >= '0' && op[i] <= '9') {
            while (op[i] >= '0' && op[i] <= '9')
                str_tmp += op[i++];
            std::stringstream(str_tmp) >> int_tmp1;
            break;
        } else if (op[i] == '(') {
            par++;
            i++;
            while (par != 0) {
                if (op[i] == '(') {
                    par++;
                } else if (op[i] == ')') {
                    par--;
                }
                str_tmp += op[i++];
            }
            str_tmp.erase(str_tmp.end() - 1);
            int_tmp1 = calcul(str_tmp);
            break;
        }
    }
    while (op[i] != '+' && op[i] != '-' && op[i] != '*' && op[i] != '/' && op[i] != '%')
        i++;
    operand = op[i];
    for (; i < op.size(); i++) {
        str_tmp.clear();
        par = 0;
        if (op[i] >= '0' && op[i] <= '9') {
            while (op[i] >= '0' && op[i] <= '9')
                str_tmp += op[i++];
            std::stringstream(str_tmp) >> int_tmp2;
            break;
        } else if (op[i] == '(') {
            par++;
            i++;
            while (par != 0) {
                if (op[i] == '(') {
                    par++;
                } else if (op[i] == ')') {
                    par--;
                }
                str_tmp += op[i++];
            }
            str_tmp.erase(str_tmp.end() - 1);
            int_tmp2 = calcul(str_tmp);
            break;
        }
    }
    return (calc_op(int_tmp1, int_tmp2, operand));
}

void Parser::feed(const std::string &oui)
{
    std::string op = oui;
    std::string str_tmp;
    int int_tmp;
    int par;

    while(!check_par(op));
    op.insert(0, 1, '(');
    op.push_back(')');
    while (_operands.empty() == false)
        _operands.pop();
    while (_operator.empty() == false)
        _operator.pop();
    for (size_t i = 0; i < op.size(); i++) {
        str_tmp.clear();
        par = 0;
        if (op[i] >= '0' && op[i] <= '9') {
            while (op[i] >= '0' && op[i] <= '9')
                str_tmp += op[i++];
            std::stringstream(str_tmp) >> int_tmp;
            _operands.push(int_tmp);
        }
        if (op[i] == '+' || op[i] == '-' || op[i] == '*' || op[i] == '/' || op[i] == '%') {
            _operator.push(op[i]);
        } else if (op[i] == '(' && i != 0) {
            par++;
            i++;
            while (par != 0) {
                if (op[i] == '(') {
                    par++;
                } else if (op[i] == ')') {
                    par--;
                }
                str_tmp += op[i++];
            }
            str_tmp.erase(str_tmp.end() - 1);
            _operands.push(calcul(str_tmp));
        }
    }
    if (_operands.empty() == false) {
        int tmp2 = _operands.top();
        _operands.pop();
        if (_operands.empty()) {
            _result += tmp2;
        } else {
            int tmp1 = _operands.top();
            _result += calc_op(tmp1, tmp2, _operator.top());
        }
    }
}
