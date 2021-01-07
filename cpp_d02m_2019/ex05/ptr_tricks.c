/*
** EPITECH PROJECT, 2020
** cpp_d02m_2019
** File description:
** ptr_tricks.c
*/

#include <stdio.h>
#include "ptr_tricks.h"

int get_array_nb_elem(const int *ptr1, const int *ptr2)
{
    int c = 0;


    if (ptr1 < ptr2)
        for (; ptr1 + c < ptr2; c++);
    else if (ptr1 > ptr2)
        for (; ptr2 + c < ptr1; c++);
    return (c);
}

whatever_t *get_struct_ptr(const int *member_ptr)
{
    whatever_t tmp;
    whatever_t *adress = (void*)member_ptr - ((void*)&tmp.member - (void*)&tmp);

    return (adress);
}
