/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** string.h
*/

#ifndef STRING_H_
# define STRING_H_

/* INCLUDE */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>



/* STRUCTURE */
typedef struct string_s string_t;
struct string_s {
    char *str;

    void (*assign_s)(struct string_s *this, const  struct string_s *str);
    void (*assign_c)(struct string_s *this, const  char *s);
    void (*append_s)(struct string_s *this, const struct string_s *ap);
    void (*append_c)(struct string_s *this, const char *ap);
    char (*at)(const struct string_s *this, size_t pos);
    void (*clear)(struct string_s *this);
    int (*size)(const struct string_s *this);
    int (*compare_s)(const struct string_s *this, const struct string_s *str);
    int (*compare_c)(const struct string_s *this, const char *str);
    size_t (*copy)(const struct string_s *this, char *s, size_t n, size_t pos);
    const char *(*c_str)(const struct string_s *this);
    int (*empty)(const struct string_s *this);
    int (*find_s)(const struct string_s *t, const struct string_s *s, size_t p);
    int (*find_c)(const struct string_s *this, const char *str, size_t pos);
    void (*insert_c)(struct string_s *this, size_t pos, const char *str);
    void (*insert_s)(struct string_s *t, size_t p, const struct string_s *str);
    int (*to_int)(const struct string_s *this);
    string_t **(*split_s)(const struct string_s *this, char separator);
    char **(*split_c)(const struct string_s *this, char separator);
    void (*print)(const struct string_s *this);
    void (*join_c)(struct string_s *this, char delim, const char *const *tab);
    void (*join_s)(struct string_s *t, char d, const struct string_s *const *h);
};



/* MY_STRING */
void string_init(string_t *this, const char *s);
void string_destroy(string_t *this);

/* ASSIGN */
void assign_s(string_t *this, const  string_t *str);
void assign_c(string_t *this, const  char *s);

/* APPEND */
void append_s(string_t *this, const string_t *ap);
void append_c(string_t *this, const char *ap);

/* AT */
char at(const string_t *this, size_t pos);

/* CLEAR */
void clear(string_t *this);

/* CLEAR */
int size(const string_t *this);

/* COMPARE */
int compare_s(const string_t *this, const string_t *str);
int compare_c(const string_t *this, const char *str);

/* COMPARE */
size_t copy(const string_t *this, char *s, size_t n, size_t pos);

/* C_STR */
const char *c_str(const string_t *this);

/* EMPTY */
int empty(const string_t *this);

/* FIND */
int find_s(const string_t *this, const string_t *str, size_t pos);
int find_c(const string_t *this, const char *str, size_t pos);

/* INSERT */
void insert_c(string_t *this, size_t pos, const char *str);
void insert_s(string_t *this, size_t pos , const string_t *str);

/* TO_INT */
int to_int(const string_t *this);

/* SPLIT */
string_t **split_s(const string_t *this, char separator);
char **split_c(const string_t *this, char separator);

/* PRINT */
void print(const string_t *this);

/* JOIN */
void join_c(string_t *this, char delim, const char *const *tab);
void join_s(string_t *this, char delim, const string_t *const *tab);

#endif /* STRING_H_ */
