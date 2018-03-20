#ifndef STACK_FP_H
#define STACK_FP_H

#define MAXSTACK 100 
typedef struct _StackF StackF;

/* Tipos de los punteros a función soportados por la pila */ 
typedef void (*destroy_element_function_type)(void*); 
typedef void (*(*copy_element_function_type)(const void*)); 
typedef int (*print_element_function_type)(FILE *, const void*);

StackF *stackF_ini(destroy_element_function_type f1, copy_element_function_type f2, print_element_function_type f3);
void stackF_destroy(StackF *s);
Status stackF_push(StackF *s, const void *v);
void *stackF_pop(StackF *s);
void *stackF_top(const StackF *s);
Bool stackF_isEmpty(const StackF *s); 
Bool stackF_isFull(const StackF *s);
int stackF_print(FILE *f, const StackF *s); 

#endif
