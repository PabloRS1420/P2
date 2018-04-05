#ifndef STACK_ELEMENT_INT_H
#define STACK_ELEMENT_INT_H

#include <stdio.h>
#include <stdlib.h>
#include "stack_element_int.h"
#include "types.h"

typedef struct _StackI StackI;

StackI *stack_ini();
void stack_destroy(StackI *s);
Status stack_push(StackI *s, const ElementI *e);
ElementI *stack_pop(StackI *s);
ElementI *stack_top(const StackI *s);
Bool stack_isEmpty(const StackI *s);
Bool stack_isEmpty(const StackI *s);
int stack_print(FILE *f, const StackI *s);

#endif
