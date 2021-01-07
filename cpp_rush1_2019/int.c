/*
** EPITECH PROJECT, 2020
** rush1
** File description:
** int
*/

#include <stdio.h>
#include "int.h"
#include "all.h"

typedef struct
{
    Class base;
    int x;
} IntClass;

static int my_intlen(float value) {
    int l =! value;

    while (value) {
        l++; value/=10;
    }
    return l;
}

static char *fgh(Object *this)
{
    IntClass *pts = (IntClass*)this;
    Class *name = (Class*)this;
    char *tmp = malloc(sizeof(char) * my_intlen(pts->x) + 1);
    char *res = malloc(sizeof(char) * (strlen(name->__name__) + my_intlen(pts->x) + 9));

    res[0] = '<';
    res[1] = '\0';
    res = strcat(res, name->__name__);
    res = strcat(res, " (");
    sprintf(tmp, "%d", pts->x);
    res = strcat(res, tmp);
    free(tmp);
    strcat(res, ")>");
    return (res);
}

static void Int_ctor(IntClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
}

static void Int_dtor(IntClass *this)
{
    this->x = 0;
}

Object *add_int(const Object *this, const Object *other)
{
    IntClass *a = (IntClass *)this;
    IntClass *b = (IntClass *)other;
    IntClass *new_int = new(Int, a->x + b->x);

    return (new_int);
}

Object *sub_int(const Object *this, const Object *other)
{
    IntClass *a = (IntClass *)this;
    IntClass *b = (IntClass *)other;
    IntClass *new_int = new(Int, a->x - b->x);

    return (new_int);
}

Object *mul_int(const Object *this, const Object *other)
{
    IntClass *a = (IntClass *)this;
    IntClass *b = (IntClass *)other;
    IntClass *new_int = new(Int, a->x * b->x);

    return (new_int);
}

Object *div_int(const Object *this, const Object *other)
{
    IntClass *a = (IntClass *)this;
    IntClass *b = (IntClass *)other;
    IntClass *new_int = new(Int, a->x / b->x);

    return (new_int);
}

bool equal_int(const Object *this, const Object *other)
{
    IntClass *a = (IntClass *)this;
    IntClass *b = (IntClass *)other;

    if (a->x == b->x)
        return (1);
    else
        return (0);
}

bool greater_int(const Object *this, const Object *other)
{
    IntClass *a = (IntClass *)this;
    IntClass *b = (IntClass *)other;

    if (a->x > b->x)
        return (1);
    else
        return (0);
}

bool lesser_int(const Object *this, const Object *other)
{
    IntClass *a = (IntClass *)this;
    IntClass *b = (IntClass *)other;

    if (a->x < b->x)
        return (1);
    else
        return (0);
}

// Create additional functions here

static const IntClass _description = {
    {/* Class struct */
     .__size__ = sizeof(IntClass),
     .__name__ = "Int",
     .__ctor__ = (ctor_t)&Int_ctor,
     .__dtor__ = (dtor_t)&Int_dtor,
     .__str__ = &fgh, /* Implement this method for exercice 02 */
     .__add__ = &add_int, /* Implement this method for exercice 03 */
     .__sub__ = &sub_int, /* Implement this method for exercice 03 */
     .__mul__ = &mul_int,
     .__div__ = &div_int,
     .__eq__ = &equal_int,
     .__gt__ = &greater_int,
     .__lt__ = &lesser_int},
    .x = 0};

const Class *Int = (const Class *)&_description;