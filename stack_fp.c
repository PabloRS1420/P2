#include <stdio.h>
#include <stdlib.h>
#include "stack_fp.h"
#include "element.h"
#include "types.h"


struct _StackF { 
    int top; 
    void * item[MAXSTACK]; 
    destroy_element_function_type   destroy_element_function; 
    copy_element_function_type      copy_element_function; 
    print_element_function_type     print_element_function; 
};

StackF *stackF_ini(destroy_element_function_type f1, copy_element_function_type f2, print_element_function_type f3){
    stackF *sF = NULL;
    sF = (stackF *) malloc(siceof(stackF));
    if(!sF) return NULL;
    
    
    return sF;
}

void stackF_destroy(StackF *s){
    
}

Status stackF_push(StackF *s, const void *v){
    
}

void *stackF_pop(StackF *s){
    
}

void *stackF_top(const StackF *s){
    
}

Bool stackF_isEmpty(const StackF *s);{
    
}

Bool stackF_isFull(const StackF *s){
    
}

int stackF_print(FILE *f, const StackF *s){
    
}



