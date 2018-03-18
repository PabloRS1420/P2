#ifndef STACK_ELEMENT_H
#define STACK_ELEMENT_H

typedef struct _Stack Stack;

stack *stack_ini();
void stack_destroy(stack *s);
Status stack_push(stack *s, const Element *e);
Element stack_pop(stact *s);
Element stack_top(const stact *s);
Bool stack_isEmpty(const stack *s);
Bool stack_isEmpty(const stack *s);
int stack_print(FILE *f, const stack *s);

#endif

