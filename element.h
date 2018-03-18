#ifndef ELEMENT_H
#define ELEMENT_H

typedef struct _Stack Stack;

Element *element_ini();
void element_destroy(element *e);
Status element_setInfo(element *e, point *p);
Point element_getInfo(element *e);
Element *element_copy(const element *e);
Bool element_equals(const element *e1, const element *e2);
int element_print(FILE *f, const element *e);

#endif
