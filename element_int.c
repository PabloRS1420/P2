#include "element_int.h"

struct _ElementI { 
    int *info; 
};

ElementI *element_ini(){
    ElementI *e;
    e = (Element *) malloc(siceof(Element));
    if(!e) return NULL;
    
    return s;
}

void element_destroy(ElementI *e){
    if(e) point_destroy(e->info);
}

Status element_setInfo(ElementI *e, int *i){
    if(!e) return ERROR;
    
    e->info=i;
    return OK;
}

int *element_getInfo(ElementI *e){
    if(!e) return NULL;
    
    return e->info;
}

ElementI *element_copy(const ElementI *e){
    Element *eCopy = NULL;
    eCopy = element_ini;
    if(!e_copy) return NULL;
    
    eCopy->info = e->info;
    return eCopy;
}

Bool element_equals(const ElementI *e1, const ElementI *e2){
    if(e1->info == e2->info) return TRUE;
    else return FALSE;
}

int element_print(FILE *f, const ElementI *e){
    return fprintf(f, "%d", e->info);
}

