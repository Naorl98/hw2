GC = gcc
MAIN = main.o
MY = my_mat.o
WARN= -Wall -g

all:	connections
connections:	$(MAIN) $(MY)
	$(GC) $(WARN) $(MAIN) $(MY)  -o connections -lm
main.o:  main.c my_mat.h 
	$(GC) $(WARN) -c main.c

my_mat.o: my_mat.c my_mat.h
		$(GC) $(WARN) -c my_mat.c 
clean: 
	rm -f *.o *.a *.so connections
.PHONY: clean all
