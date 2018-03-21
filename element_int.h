#ifndef ELEMENT_INT_H
#define ELEMENT_INT_H

typedef struct _ElementI ElementI;

ElementI *elementI_ini();
void elementI_destroy(ElementI *e);
Status elementI_setInfo(ElementI *e, Point *p);
int elementI_getInfo(ElementI *e);
ElementI *elementI_copy(const ElementI *e);
Bool elementI_equals(const ElementI *e1, const ElementI *e2);
int elementI_print(FILE *f, const ElementI *e);

#endif
