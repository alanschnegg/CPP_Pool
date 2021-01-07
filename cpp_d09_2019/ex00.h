/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** ex00.h
*/

#ifndef EX00_H_
# define EX00_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct cthulhu_s {
    int m_power;
    char *m_name;
};
typedef struct cthulhu_s cthulhu_t;

cthulhu_t *new_cthulhu(void);
void print_power(cthulhu_t *this);
void attack(cthulhu_t *this);
void sleeping(cthulhu_t *this);

struct koala_s {
    cthulhu_t m_parent;
    char is_a_legend;
};
typedef struct koala_s koala_t;

koala_t *new_koala(char *name, char is_a_legend);
void eat(koala_t *this);

#endif /* EX00_H_ */
