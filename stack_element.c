#include <stdio.h>
#include <stdlib.h>
#include "stack_element.h"
#include "types.h"

#define MAXSTACK 100

struct _Stack {
    int top; 
    Point * item[MAXSTACK];
};

stack *stack_ini(){
    stack *s = NULL;
    s = (stack *) malloc(siceof(stack));
    if(!s) return NULL;
    
    s.top = 0;
    return s;
}

void stack_destroy(stack *s){
    if(s) free(s);
}

Status stack_push(stack *s, const point *p){
    if(!s || !p) return ERROR;
    
    if(pila_llena) return ERROR;
    
    s->item[s.top] = e;
    s.top++;
    return OK;
}

Point stack_pop(stact *s){
    Point *p;
    if(pila_vacia==TRUE) return NULL;
    p = point_ini(0, 0, 0);
    if(!p) return NULL;
    
    p = point_copy(s->item[s.top]);
    s->item[s.top] = NULL;
    s.top--
    return e;
}

Point stack_top(const stact *s){
    Point *p;
    if(pila_vacia==TRUE) return NULL;
    p = point_ini(0, 0, 0);
    if(!p) return NULL;
    
    p = point_copy(s->item[s.top]);
    return e;
}

Bool stack_isEmpty(const stack *s){
    if(s.top==0) return TRUE;
    else return FALSE;
}

Bool stack_isFULL(const stack *s){
    if(s.top==MAXSTACK) return TRUE;
    else return FALSE;
}

int stack_print(FILE *f, const stack *s){
    return fprintf(f, "%d, %", stack.top, stack_top(s));
}


    
    
    
