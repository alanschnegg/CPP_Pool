/*
** EPITECH PROJECT, 2020
** cpp_d02m_2019
** File description:
** func_ptr.c
*/

#include "func_ptr.h"

void print_normal(const char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        write(1, &str[i], 1);
    write(1, "\n", 1);
}

void print_reverse(const char *str)
{
    for (int i = strlen(str) - 1; i >= 0; i--)
        write(1, &str[i], 1);
    write(1, "\n", 1);
}

void print_upper(const char *str)
{
    char c;

    for (int i = 0; str[i] != '\0'; i++) {
        c = str[i];
        if (c >= 'a' && c <= 'z')
            c -= 32;
        write(1, &c, 1);
    }
    write(1, "\n", 1);
}

void print_42(const char *str)
{
    write(1, "42\n", 3);
    if (str)
        return;
}

void do_action(action_t action, const char *str)
{
    void (*tab_ptr[4])(const char *str) = {
        print_normal,
        print_reverse,
        print_upper,
        print_42
    };

    (tab_ptr[action])(str);
}
