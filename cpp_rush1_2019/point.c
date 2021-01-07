/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include "point.h"
#include "all.h"

typedef struct
{
    Class base;
    int x, y;
}   PointClass;

static int my_intlen(int value){
    int l =! value;

    while (value) {
        l++; value/=10;
    }
    return l;
}

static char *fgh(Object *this)
{
    PointClass *pts = (PointClass*)this;
    Class *name = (Class*)this;
    char *tmp = malloc(sizeof(char) * my_intlen(pts->x) + 1);
    char *res = malloc(sizeof(char) * (strlen(name->__name__) + my_intlen(pts->x) + my_intlen(pts->y) + 9));

    res[0] = '<';
    res[1] = '\0';
    res = strcat(res, name->__name__);
    res = strcat(res, " (");
    sprintf(tmp, "%d", pts->x);
    res = strcat(res, tmp);
    free(tmp);
    tmp = malloc(sizeof(char) * my_intlen(pts->y) + 1);
    res = strcat(res, ", ");
    sprintf(tmp, "%d", pts->y);
    res = strcat(res, tmp);
    free(tmp);
    strcat(res, ")>");
    return (res);
}

static void Point_ctor(PointClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
}

static void Point_dtor(PointClass *this)
{
    this->x = 0;
    this->y = 0;
}

Object *add_point(const Object *this, const Object *other)
{
    PointClass *a = (PointClass*)this;
    PointClass *b = (PointClass*)other;
    PointClass *new_point = new(Point, a->x + b->x, a->y + b->y);

    return (new_point);
}

Object *sub_point(const Object *this, const Object *other)
{
    PointClass *a = (PointClass*)this;
    PointClass *b = (PointClass*)other;
    PointClass *new_point = new(Point, a->x - b->x, a->y - b->y);

    return (new_point);
}

Object *mul_point(const Object *this, const Object *other)
{
    PointClass *a = (PointClass*)this;
    PointClass *b = (PointClass*)other;
    PointClass *new_point = new(Point, a->x * b->x, a->y * b->y);

    return (new_point);
}

Object *div_point(const Object *this, const Object *other)
{
    PointClass *a = (PointClass*)this;
    PointClass *b = (PointClass*)other;
    PointClass *new_point = new(Point, a->x / b->x, a->y / b->y);

    return (new_point);
}


static const PointClass _description = {
    {/* Class struct */
     .__size__ = sizeof(PointClass),
     .__name__ = "Point",
     .__ctor__ = (ctor_t)&Point_ctor,
     .__dtor__ = (dtor_t)&Point_dtor,
     .__str__ = &fgh, /* Implement this method for exercice 02 */
     .__add__ = &add_point, /* Implement this method for exercice 03 */
     .__sub__ = &sub_point, /* Implement this method for exercice 03 */
     .__mul__ = &mul_point,
     .__div__ = &div_point,
     .__eq__ = NULL,
     .__gt__ = NULL,
     .__lt__ = NULL},
    .x = 0,
    .y = 0};

const Class *Point = (const Class *)&_description;
