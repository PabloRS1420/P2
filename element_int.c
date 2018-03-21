#include <stdio.h>
#include <stdlib.h>
#include "element.h"
#include "point.h"
#include "types.h"


struct _Element { 
    int *info; 
};

Element *element_ini(){
    Element *e;
    e = (Element *) malloc(siceof(Element));
    if(!e) return NULL;
    
    return s;
}

void element_destroy(Element *e){
    if(e) point_destroy(e->info);
}

Status element_setInfo(Element *e, int *i){
    if(!e) return ERROR;
    
    e->info=i;
    return OK;
}

int *element_getInfo(Element *e){
    if(!e) return NULL;
    
    return e->info;
}

Element *element_copy(const Element *e){
    Element *eCopy = NULL;
    eCopy = element_ini;
    if(!e_copy) return NULL;
    
    eCopy->info = e->info;
    return eCopy;
}

Bool element_equals(const Element *e1, const Element *e2){
    if(e1->info == e2->info) return TRUE;
    else return FALSE;
}

int element_print(FILE *f, const Element *e){
    return fprintf(f, "%d", e->info);
}

