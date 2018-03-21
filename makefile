all:		clean p2 dist cleantemp

CFLAGS = -Wall -ansi -pedantic -g
 ##########################################################################

p2_e1:	p2_e1.o element_int.o stack_element_int.o
		gcc -o p2_e1.o element_int.o stack_element_int.o

p2_e2:	element.o map.o point.o stack_element.o
		gcc -o p2_e2 element.o map.o point.o stack_element.o

p2_e3:	element.o map.o point.o stack_element.o
		gcc -o p2_e2 element.o map.o point.o stack_element.o

element_int.o:	element_int.c element_int.h types.h
		gcc -c $(CFLAGS) element_int.c

stack_element_int.o:	stack_element_int.c stack_element_int.h element_int.h types.h
		gcc -c $(CFLAGS) stack_element_int.c

element.o:	element.c element.h point.h types.h
		gcc -c $(CFLAGS) element_int.c

stack_element.o:	stack_element.c stack_element.h element.h types.h
		gcc -c $(CFLAGS) stack_element.c

point.o: 	point.c point.h types.h
		gcc -c $(CFLAGS) point.c

map.o:	map.c map.h stack_element.h element.h point.h types.h
		gcc -c $(CFLAGS) game_loop.c

cleantemp:
		rm -f *.o

dist:
		tar cvzf goose.tgz *.c *.h *.dat makefile

clean:
		rm -f *.exe
