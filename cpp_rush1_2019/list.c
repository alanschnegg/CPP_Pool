/*
** EPITECH PROJECT, 2019
** cpp_rush1
** File description:
** Exercice 05
*/

#include <stdlib.h>
#include <stdarg.h>
#include "all.h"
#include "raise.h"
#include "new.h"

typedef struct ListClass_s ListClass;
struct ListClass_s {
    Container   base;
    Class       *_type;
    Object      *_obj;
    ListClass *next;
};

static void List_ctor(Object *t, va_list *args)
{
    ListClass *this = (ListClass *)t;
    int size = va_arg(*args, int);
    ListClass *tmp = this;
    Class *class = va_arg(*args, Class*);
    int value = va_arg(*args, int);

    for (unsigned int i = 0; i < size; i++) {
        tmp->_obj = malloc(sizeof(tmp->_type));
        tmp->_type = class;
        tmp->_obj = new(tmp->_type, value);
        tmp->next = malloc(sizeof(ListClass));
        tmp = tmp->next;
    }
    tmp = NULL;
}

static void     List_dtor(Object *t)
{
    ListClass *this = (ListClass *)t;
    ListClass *tmp;

    for (unsigned int i = 0; this->next != NULL; i++) {
        delete(this->_obj);
        tmp = this;
        this = this->next;
        free(tmp);
    }
}

static len_t   List_len(Object *t)
{
    ListClass *this = (ListClass *)t;
    ListClass *tmp = this;
    len_t i;

    for (i = 0; tmp->next != NULL; i++)
        tmp = tmp->next;
    return (i);
}

static Object *List_index_value(Object *t, len_t index)
{
    ListClass *this = (ListClass *)t;
    ListClass *tmp = this;

    if (index > List_len(this))
        return(NULL);
    for (len_t i = 0; i != index && tmp->next != NULL; i++)
        tmp = tmp->next;
    return (tmp->_obj);
}

static void  Del_end(Object *t)
{
    ListClass *this = (ListClass *)t;
    ListClass *tmp = this;

    for (int i = 0; tmp->next->next != NULL; i++)
        tmp = tmp->next;
    tmp->next = NULL;
}

static void List_add_node_end(Object *t, ...)
{
    ListClass *this = (ListClass *)t;
    ListClass *tmp = this;
    ListClass *node = malloc(sizeof(ListClass));
    va_list ap;

    va_start(ap, t);
    while(tmp->next != NULL)
        tmp = tmp->next;

    node->_obj = malloc(sizeof(tmp->_type));
    node->_type = tmp->_type;
    node->_obj = new(node->_type, &ap);
    node->next = malloc(sizeof(ListClass));
    node = tmp->next;
    va_end(ap);
}

static const ListClass   _descr = {
    {   /* Container struct */
        {   /* Class struct */
            .__size__ = sizeof(ListClass),
            .__name__ = "List",
            .__ctor__ = (ctor_t)&List_ctor,
            .__dtor__ = (dtor_t)&List_dtor,
            .__str__ = NULL,
            .__add__ = NULL,
            .__sub__ = NULL,
            .__mul__ = NULL,
            .__div__ = NULL,
            .__eq__ = NULL,
            .__gt__ = NULL,
            .__lt__ = NULL,
        },
        .__len__ = (len_t)&List_len,
        .__del__ = &Del_end,
        .__add__ = &List_add_node_end,
        .__ind__ = (Object*)&List_index_value,

    },
    ._type = NULL,
    ._obj = NULL,
    .next = NULL
};

const Class   *List = (const Class *)&_descr;
