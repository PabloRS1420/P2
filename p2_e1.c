#include <stdio.h>
#include "stack_element_int.h"

int main(int argc, char * argv[]){
    printf("> ./p2_e1 %d", argv[1]);
    StackI *sTotal = stack_ini();
    StackI *sImpar = stack_ini();
    StackI *sPar = stack_ini();
    int y, i;
    
    printf("Pila total (no llena, vacia):");
    for(i=0; i<argv[1]; i++){
        printf("\nIntroduce número: ");
        scanf("%d", &y);
        stack_push(sTotal, y);
    }
    
    if(stack_isEmpty(sTotal)) printf("\nPila total (no llena, vacia):");
    else if(stack_isFull(sTotal)) printf("\nPila total (llena, no vacia):");
    else printf("\nPila total (no llena, no vacia):");
    while(stack_isEmpty(sTotal)==FALSE){
        if(stack_top%2==0){
            stack_push(sPar, stack_pop(sTotal));
            par++;
        }
        else{
            stack_push(sPar, stack_pop(sTotal));
            impar++;
        }
    }
    
    if(stack_isEmpty(sPar)) printf("\nImprimiendo la pila (no llena, vacía) con números pares:");
    else if(stack_isFull(sPar)) printf("\nImprimiendo la pila (llena, no vacía) con números pares:");
    else printf("\nImprimiendo la pila (no llena, no vacía) con números pares:");
    while(stack_isEmpty(sPar)==FALSE){
        printf("\n[%d]", stack_pop(sPar);
    }
                                
   if(stack_isEmpty(sImpar)) printf("\nImprimiendo la pila (no llena, vacía) con números pares:");
   else if(stack_isFull(sImpar)) printf("\nImprimiendo la pila (llena, no vacía) con números pares:");
   else printf("\nImprimiendo la pila (no llena, no vacía) con números pares:");
   while(stack_isEmpty(sImpar)==FALSE){
        printf("\n[%d]", stack_pop(sImpar);
   }
          
   printf("\nPila total (no llena, vacia):");
   stack_destroy(sTotal);
   stack_destroy(sImpar);
   stack_destroy(sPar);
   return 1;
}
