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
   printf("> ./p2_e2 %d", argv[1]);
