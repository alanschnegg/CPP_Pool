/*
** EPITECH PROJECT, 2020
** cpp_rush1_2019
** File description:
** new.c
*/

#include "all.h"

Object *new(const Class *class, ...)
{
    Object *tmp;
    va_list ap;

    va_start(ap, class);
    if (class == NULL)
        raise("Class missing");
    if (class->__size__ <= 0)
        raise("Object size missing");
    tmp = va_new(class, &ap);
    va_end(ap);
    return (tmp);
}

Object *va_new(const Class *class, va_list* ap)
{
    Class *tmp = malloc(class->__size__);

    if (tmp == NULL)
        raise("Memory place missing");
    if (memcpy(tmp, class, class->__size__) == NULL)
        raise("Memcpy failed");
    if (tmp->__ctor__)
        tmp->__ctor__(tmp, ap);
    return (tmp);
}

void delete(Object *ptr)
{
    Class *base = (Class *)ptr;

    if (ptr && base->__dtor__)
        base->__dtor__(ptr);
    free(ptr);
    ptr = NULL;
}
