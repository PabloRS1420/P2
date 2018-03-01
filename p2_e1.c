#include <stdio.h>
#include "stack_element.h"
#include "element.h"
#include "types.h"

int main(int argc, char * argv[]){
    int y, i;
    stack *sTotal = NULL;
    stack *sImpar = NULL;
    stack *sPar = NULL;
    FILE *f;
    sTotal = stack_ini();
    sImpar = stack_ini();
    sPar = stack_ini();
    printf("> ./p2_e1 %d", argv[1]);
    
    printf("Pila total (no llena, vacia):");
    for(i=0; i<argv[1]; i++){
        printf("\nIntroduce número: ");
        scanf("%d", &y);
        stack_push(sTotal, y);
    }
    
    printf("Pila total (no llena, no vacia):");   
    while(stack_isEmpty==FALSE){
        if(stack_top%2){
            stack_push(sPar, stack_pop(sTotal));
        }
        else{
            stack_push(sPar, stack_pop(sTotal));
        }
    }
    
}
