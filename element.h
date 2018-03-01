#ifndef ELEMENT_H
#define ELEMENT_H

typedef struct _Stack Stack;

Element *element_ini();
void element_destroy(element *);
Status element_setInfo(element *, void *);
void element_getInfo(element *);
Element *element_copy(const element *);
Bool element_equals(const element *, const element *);
int element_print(FILE *, const element *);

#endif
