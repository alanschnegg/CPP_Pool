/*
** EPITECH PROJECT, 2020
** cpp_d01_2019
** File description:
** ex05.h
*/

#ifndef EX05_H_
# define EX05_H_

#include <stdint.h>

typedef union __attribute__ (( packed)) {
    struct {
        uint16_t foo;
        union {
            uint16_t foo;
            uint16_t bar;
        } bar;
    } foo;
    uint32_t bar;
} foo_t;

#endif /* EX05_H_ */
