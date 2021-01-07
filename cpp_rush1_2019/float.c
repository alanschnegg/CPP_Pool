/*
** EPITECH PROJECT, 2020
** rush1
** File description:
** float
*/

#include <stdio.h>
#include "float.h"
#include "all.h"

typedef struct
{
    Class base;
    double x;
} FloatClass;

static int my_intlen(float value) {
    int l =! value;

    while (value) {
        l++; value/=10;
    }
    return l;
}

static char *fgh(Object *this)
{
    FloatClass *pts = (FloatClass*)this;
    Class *name = (Class*)this;
    char *tmp = malloc(sizeof(char) * my_intlen(pts->x) + 1);
    char *res = malloc(sizeof(char) * (strlen(name->__name__) + my_intlen(pts->x) + 17));

    res[0] = '<';
    res[1] = '\0';
    res = strcat(res, name->__name__);
    res = strcat(res, " (");
    sprintf(tmp, "%f", pts->x);
    res = strcat(res, tmp);
    free(tmp);
    strcat(res, ")>");
    return (res);
}

static void Float_ctor(FloatClass *this, va_list *args)
{
    this->x = va_arg(*args, double);
}

static void Float_dtor(FloatClass *this)
{
    this->x = 0;
}

Object *add_float(const Object *this, const Object *other)
{
    FloatClass *a = (FloatClass *)this;
    FloatClass *b = (FloatClass *)other;
    FloatClass *new_float = new(Float, a->x + b->x);

    return (new_float);
}

Object *sub_float(const Object *this, const Object *other)
{
    FloatClass *a = (FloatClass *)this;
    FloatClass *b = (FloatClass *)other;
    FloatClass *new_float = new(Float, a->x - b->x);

    return (new_float);
}

Object *mul_float(const Object *this, const Object *other)
{
    FloatClass *a = (FloatClass *)this;
    FloatClass *b = (FloatClass *)other;
    FloatClass *new_float = new(Float, a->x * b->x);

    return (new_float);
}

Object *div_float(const Object *this, const Object *other)
{
    FloatClass *a = (FloatClass *)this;
    FloatClass *b = (FloatClass *)other;
    FloatClass *new_float = new(Float, a->x / b->x);

    return (new_float);
}

bool equal_float(const Object *this, const Object *other)
{
    FloatClass *a = (FloatClass *)this;
    FloatClass *b = (FloatClass *)other;

    if (a->x == b->x)
        return (1);
    else
        return (0);
}

bool greater_float(const Object *this, const Object *other)
{
    FloatClass *a = (FloatClass *)this;
    FloatClass *b = (FloatClass *)other;

    if (a->x > b->x)
        return (1);
    else
        return (0);
}

bool lesser_float(const Object *this, const Object *other)
{
    FloatClass *a = (FloatClass *)this;
    FloatClass *b = (FloatClass *)other;

    if (a->x < b->x)
        return (1);
    else
        return (0);
}

// Create additional functions here

static const FloatClass _description = {
    {/* Class struct */
     .__size__ = sizeof(FloatClass),
     .__name__ = "Float",
     .__ctor__ = (ctor_t)&Float_ctor,
     .__dtor__ = (dtor_t)&Float_dtor,
     .__str__ = &fgh, /* Implement this method for exercice 02 */
     .__add__ = &add_float, /* Implement this method for exercice 03 */
     .__sub__ = &sub_float, /* Implement this method for exercice 03 */
     .__mul__ = &mul_float,
     .__div__ = &div_float,
     .__eq__ = &equal_float,
     .__gt__ = &greater_float,
     .__lt__ = &lesser_float},
    .x = 0};

const Class *Float = (const Class *)&_description;
