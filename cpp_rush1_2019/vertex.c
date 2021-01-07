/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include "vertex.h"
#include "all.h"

typedef struct
{
    Class base;
    int x, y, z;
} VertexClass;

static int my_intlen(int value) {
    int l =! value;

    while (value) {
        l++; value/=10;
    }
    return l;
}

static char *fgh(Object *this)
{
    VertexClass *pts = (VertexClass*)this;
    Class *name = (Class*)this;
    char *tmp = malloc(sizeof(char) * my_intlen(pts->x) + 2);
    char *res = malloc(sizeof(char) * (strlen(name->__name__) + my_intlen(pts->x) + my_intlen(pts->y) + my_intlen(pts->z) + 13));

    res[0] = '<';
    res[1] = '\0';
    res = strcat(res, name->__name__);
    res = strcat(res, " (");
    sprintf(tmp, "%d", pts->x);
    res = strcat(res, tmp);
    free(tmp);
    tmp = malloc(sizeof(char) * my_intlen(pts->y) + 2);
    res = strcat(res, ", ");
    sprintf(tmp, "%d", pts->y);
    res = strcat(res, tmp);
    free(tmp);
    tmp = malloc(sizeof(char) * my_intlen(pts->z) + 2);
    res = strcat(res, ", ");
    sprintf(tmp, "%d", pts->z);
    res = strcat(res, tmp);
    free(tmp);
    strcat(res, ")>");
    return (res);
}

static void Vertex_ctor(VertexClass *this, va_list *args)
{
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
    this->z = va_arg(*args, int);
}

static void Vertex_dtor(VertexClass *this)
{
    this->x = 0;
    this->y = 0;
    this->z = 0;
}

Object *add_vertex(const Object *this, const Object *other)
{
    VertexClass *a = (VertexClass *)this;
    VertexClass *b = (VertexClass *)other;
    VertexClass *new_vertex = new(Vertex, a->x + b->x, a->y + b->y, a->z + b->z);

    return (new_vertex);
}

Object *sub_vertex(const Object *this, const Object *other)
{
    VertexClass *a = (VertexClass *)this;
    VertexClass *b = (VertexClass *)other;
    VertexClass *new_vertex = new(Vertex, a->x - b->x, a->y - b->y, a->z - b->z);

    return (new_vertex);
}

Object *mul_vertex(const Object *this, const Object *other)
{
    VertexClass *a = (VertexClass *)this;
    VertexClass *b = (VertexClass *)other;
    VertexClass *new_vertex = new(Vertex, a->x * b->x, a->y * b->y, a->z * b->z);

    return (new_vertex);
}

Object *div_vertex(const Object *this, const Object *other)
{
    VertexClass *a = (VertexClass *)this;
    VertexClass *b = (VertexClass *)other;
    VertexClass *new_vertex = new(Vertex, a->x / b->x, a->y / b->y, a->z / b->z);

    return (new_vertex);
}

// Create additional functions here

static const VertexClass _description = {
    {/* Class struct */
     .__size__ = sizeof(VertexClass),
     .__name__ = "Vertex",
     .__ctor__ = (ctor_t)&Vertex_ctor,
     .__dtor__ = (dtor_t)&Vertex_dtor,
     .__str__ = &fgh, /* Implement this method for exercice 02 */
     .__add__ = &add_vertex, /* Implement this method for exercice 03 */
     .__sub__ = &sub_vertex, /* Implement this method for exercice 03 */
     .__mul__ = &mul_vertex,
     .__div__ = &div_vertex,
     .__eq__ = NULL,
     .__gt__ = NULL,
     .__lt__ = NULL},
    .x = 0,
    .y = 0,
    .z = 0};

const Class *Vertex = (const Class *)&_description;