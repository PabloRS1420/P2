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



