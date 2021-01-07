/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** my_string.c
*/

#include "string.h"

static void string_init_end(string_t *this)
{
    this->to_int = &to_int;
    this->split_s = &split_s;
    this->split_c = split_c;
    this->print = &print;
    this->join_c = &join_c;
    this->join_s = &join_s;
}

void string_init(string_t *this, const char *s)
{
    this->str = malloc(sizeof(char) * (strlen(s) + 1));
    this->str = strcpy(this->str, s);
    this->assign_s = &assign_s;
    this->assign_c = &assign_c;
    this->append_s = &append_s;
    this->append_c = &append_c;
    this->at = &at;
    this->clear = &clear;
    this->size = &size;
    this->compare_s = &compare_s;
    this->compare_c = &compare_c;
    this->copy = &copy;
    this->c_str = &c_str;
    this->empty = &empty;
    this->find_s = &find_s;
    this->find_c = &find_c;
    this->insert_c = &insert_c;
    this->insert_s = &insert_s;
    string_init_end(this);
}

void string_destroy(string_t *this)
{
    free(this->str);
    this->str = NULL;
}
