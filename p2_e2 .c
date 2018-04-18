#include <stdio.h>
#include "stack_element.h"
#include "element.h"
#include "point.h"
#include "map.h"
#include "types.h"

int main(int argc, char * argv[]){
    printf("> ./p2_e2 "%s"", argv[1]);
    Stack *s = stack_ini();
    Element *e = element_ini();
    Point *p = point_ini(0, 0, +);
    FILE *fp = fopen("argv[1]", "r+");
    if(fp == NULL) {
      printf("Error abriendo el archivo");
      return -1;
   	}
    int nFil, nCol, i, j;
    char symbol;
    fscanf(fp, "%d %d", &nFil, &nCol);
	
    for(i=0; i<nFil; i++){
        for(j=0; i<nCol; j++){
            fscanf(fp, "%s", symbol);
            point_setCoordinateX(p, i);
            point_setCoordinateY(p, j);
            point_setSymbol(p, symbol);
            element_setInfo(e, p);
            stack_push(s, e);
        }
    }
	
    for(; i>=0; i--){
        for(; j>=0, j--){
            e = stack_pop(s);
            p = element_getInfo(e);
            point_print(fp, p);
        }
    }
   
    fclose(fp);
    return 0;
}
