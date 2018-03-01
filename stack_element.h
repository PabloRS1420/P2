#ifndef STACK_ELEMENT_H
#define STACK_ELEMENT_H

typedef struct _Stack Stack;

stack *stack_ini();
void stack_destroy(stack *);
Status stack_push(stack *, const Element *);
Element stack_pop(stact *);
Element stack_top(const stact *);
Bool stack_isEmpty(const stack *);
Bool stack_isEmpty(const stack *);
int stack_print(FILE *, const stack *);

#endif

