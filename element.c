#include <stdio.h>
#include <stdlib.h>
#include "element.h"
#include "types.h"

struct _Element { 
int *info; 
};

Element *element_ini(){
    element *e;
    e = (element *) malloc(siceof(element));
    if(!e) return NULL;
    
    e.info = 0;
    return s;
}

void element_destroy(element *e){
    if(e) return e;
}

Status element_setInfo(element *e, void *v){
    if(!e) return ERROR;
    
    e->info=v;
    return OK;
}

void *element_getInfo(element *e){
    if(!e) return NULL;
    void v;
    v=e->info;
    return v;
}

Element *element_copy(const element *e){
    element *eCopy = NULL;
    eCopy = element_ini;
    if(!e_copy) return NULL;
    
    eCopy->info = e->info;
    return e_copy;
}

Bool element_equals(const element *e1, const element *e2){
    if(e1->info==e2->info) return TRUE;
    else return FALSE;
}

int element_print(FILE *f, const element *e){
    return fprintf(f, "%d", e->info);
}




