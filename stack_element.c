#include <stdio.h>
#include <stdlib.h>
#include "stack_element.h"
#include "types.h"

#define MAXSTACK 100

struct _Stack {
    int top; 
    Element * item[MAXSTACK];
};

stack * stack_ini(){
    stack *s;
    s = (stack *) malloc(siceof(stack));
    if(!s) return NULL;
    
    s.top = 0;
    return s;
}

void stack_destroy(stack *s){
    if(s) free(s);
}

Status stack_push(stack *s, const Element *e){
    if(!s || !e) return ERROR;
    
    if(pila_llena) return ERROR;
    
    s->item[s.top] = e;
    s.top++;
    return OK;
}

Element stack_pop(stact *s){
    Element *e;
    if(pila_vacia==TRUE) return NULL;
    e = element_ini;
    if(!e) return NULL;
    
    e = s->item[s.top];
    s->item[s.top] = NULL;
    s.top--
    return e;
}

Element stack_top(const stact *s){
    Element *e;
    if(pila_vacia==TRUE) return NULL;
    e = element_ini;
    if(!e) return NULL;
    
    e = s->item[s.top];
    return e;
}

Bool stack_isEmpty(const stack *s){
    if(s.top==0) return TRUE;
    else return FALSE;
}

Bool stack_isEmpty(const stack *s){
    if(s.top==MAXSTACK) return TRUE;
    else return FALSE;
}

int Sstack_print(FILE *f, const stack *s){
}


    
    
    
