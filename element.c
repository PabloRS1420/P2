#include <stdio.h>
#include <stdlib.h>
#include "element.h"
#include "point.h"
#include "types.h"


struct _Element { 
    Point *info; 
};

Element *element_ini(){
    element *e;
    e = (element *) malloc(siceof(element));
    if(!e) return NULL;
    
    return s;
}

void element_destroy(element *e){
    if(e) point_destroy(e->info);
}

Status element_setInfo(element *e, point *p){
    if(!e) return ERROR;
    
    e->info=point_copy(p);
    return OK;
}

Point *element_getInfo(element *e){
    if(!e) return NULL;
    
    return e->info;
}

Element *element_copy(const element *e){
    element *eCopy = NULL;
    eCopy = element_ini;
    if(!e_copy) return NULL;
    
    eCopy->info = point_copy (e->info);
    return eCopy;
}

Bool element_equals(const element *e1, const element *e2){
    if(point_equals(e1->info, e2->info)==TRUE) return TRUE;
    else return FALSE;
}

int element_print(FILE *f, const element *e){
    return point_print(f, e->info);
}




