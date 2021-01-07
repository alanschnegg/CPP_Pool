/*
** EPITECH PROJECT, 2020
** cpp_d01_2019
** File description:
** bitmap.h
*/

#ifndef BITMAP_H_
# define BITMAP_H_

#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

typedef struct __attribute__ (( packed)) {
    uint16_t magic;
    uint32_t size;
    uint16_t _app1;
    uint16_t _app2;
    uint32_t offset;
} bmp_header_t;

typedef struct __attribute__ (( packed)) {
    uint32_t size;
    int32_t width;
    int32_t height;
    uint16_t planes;
    uint16_t bpp;
    uint32_t compression;
    uint32_t raw_data_size;
    int32_t h_resolution;
    int32_t v_resolution;
    uint32_t palette_size;
    uint32_t important_colors;
} bmp_info_header_t;


#endif /* BITMAP_H_ */
