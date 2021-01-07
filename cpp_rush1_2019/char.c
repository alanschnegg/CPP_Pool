/*
** EPITECH PROJECT, 2020
** rush1
** File description:
** char
*/

#include <stdio.h>
#include "char.h"
#include "all.h"

typedef struct
{
    Class base;
    char x;
} CharClass;

static char *fgh(Object *this)
{
    CharClass *pts = (CharClass*)this;
    Class *name = (Class*)this;
    char *tmp = malloc(sizeof(char) * 1);
    char *res = malloc(sizeof(char) * (strlen(name->__name__) + 2));

    res[0] = '<';
    res[1] = '\0';
    res = strcat(res, name->__name__);
    res = strcat(res, " (");
    if (pts->x == '\0') {
        return (res);
    } else {
        sprintf(tmp, "%c", pts->x);
        res = strcat(res, tmp);
        free(tmp);
        strcat(res, ")>");
        return (res);
    }
}

static void Char_ctor(CharClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
}

static void Char_dtor(CharClass *this)
{
    this->x = 0;
}

Object *add_char(const Object *this, const Object *other)
{
    CharClass *a = (CharClass *)this;
    CharClass *b = (CharClass *)other;
    CharClass *new_char = new(Char, a->x + b->x);

    return (new_char);
}

Object *sub_char(const Object *this, const Object *other)
{
    CharClass *a = (CharClass *)this;
    CharClass *b = (CharClass *)other;
    CharClass *new_char = new(Char, a->x - b->x);

    return (new_char);
}

Object *mul_char(const Object *this, const Object *other)
{
    CharClass *a = (CharClass *)this;
    CharClass *b = (CharClass *)other;
    CharClass *new_char = new(Char, a->x * b->x);

    return (new_char);
}

Object *div_char(const Object *this, const Object *other)
{
    CharClass *a = (CharClass *)this;
    CharClass *b = (CharClass *)other;
    CharClass *new_char = new(Char, a->x / b->x);

    return (new_char);
}

bool equal_char(const Object *this, const Object *other)
{
    CharClass *a = (CharClass *)this;
    CharClass *b = (CharClass *)other;

    if (a->x == b->x)
        return (1);
    else
        return (0);
}

bool greater_char(const Object *this, const Object *other)
{
    CharClass *a = (CharClass *)this;
    CharClass *b = (CharClass *)other;

    if (a->x > b->x)
        return (1);
    else
        return (0);
}

bool lesser_char(const Object *this, const Object *other)
{
    CharClass *a = (CharClass *)this;
    CharClass *b = (CharClass *)other;

    if (a->x < b->x)
        return (1);
    else
        return (0);
}

// Create additional functions here

static const CharClass _description = {
    {/* Class struct */
     .__size__ = sizeof(CharClass),
     .__name__ = "Char",
     .__ctor__ = (ctor_t)&Char_ctor,
     .__dtor__ = (dtor_t)&Char_dtor,
     .__str__ = &fgh, /* Implement this method for exercice 02 */
     .__add__ = &add_char, /* Implement this method for exercice 03 */
     .__sub__ = &sub_char, /* Implement this method for exercice 03 */
     .__mul__ = &mul_char,
     .__div__ = &div_char,
     .__eq__ = &equal_char,
     .__gt__ = &greater_char,
     .__lt__ = &lesser_char},
    .x = 0};

const Class *Char = (const Class *)&_description;