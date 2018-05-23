all:		clean p2 dist cleantemp

########################################################
CC=gcc
CFLAGS= -g -Wall -pedantic -ansi
EJS = p2_e1 p2_e2 p2_e3
########################################################
OBJECTSP2E1 = p2_e1.o stack_element_int.o element_int.o
OBJECTSP2E2 = p2_e2.o map.o stack_element.o element.o point.o
OBJECTSP2E3 = p2_e3.o stack_element.o element.o point.o map.o
########################################################

all: $(EJS) clear

p2_e1: $(OBJECTSP2E1)
	$(CC) $(CFLAGS) -o p2_e1 $(OBJECTSP2E1)

p2_e2: $(OBJECTSP2E2)
	$(CC) $(CFLAGS) -o p2_e2 $(OBJECTSP2E2)

p2_e3: $(OBJECTSP2E3)
	$(CC) $(CFLAGS) -o p2_e3 $(OBJECTSP2E3)

p2_e1.o: p2_e1.c stack_element_int.h element_int.h types.h
	$(CC) $(CFLAGS) -c p2_e1.c

p2_e2.o: p2_e2.c map.h stack_element.h element.h point.h types.h
	$(CC) $(CFLAGS) -c p2_e2.c

p2_e3.o: p2_e3.c stack_element.h element.h point.h map.h types.h
	$(CC) $(CFLAGS) -c p2_e3.c

point.o: point.c point.h
	$(CC) $(CFLAGS) -c point.c

map.o: map.c map.h stack_element.h element.h
	$(CC) $(CFLAGS) -c map.c

element.o: element.c element.h point.h
	$(CC) $(CFLAGS) -c element.c

element_int.o: element_int.c element_int.h
	$(CC) $(CFLAGS) -c element.c

stack_element.o: stack_element.c stack_element.h element.h
	$(CC) $(CFLAGS) -c element.c

stack_element_int.o: stack_element_int.c stack_element_int.h
	$(CC) $(CFLAGS) -c element_int.c


clear:
	rm -rf *.o 

clean:
	rm -rf *.o $(EJS)

run:
	@echo ">>>>>>Running p1_e1"
	./p1_e1
	@echo ">>>>>>Running p1_e2"
	./p1_e2 m1.txt

runv:
	@echo ">>>>>>Running p1_e1 with valgrind"
	valgrind --leak-check=full ./p1_e1
	@echo ">>>>>>Running p1_e2 with valgrind"
	valgrind --leak-check=full ./p1_e2 m1.txt
	
