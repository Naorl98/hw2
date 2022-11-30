GC = gcc
AR = ar
MAIN = main.o
MY = my_mat.o
WARN= -Wall -g

all:	$(MAIN) $(MY) my_mat.a my_mat.so connections
connections:	$(MAIN) my_mat.a
	$(GC) $(WARN) $(MAIN) my_mat.a -o connections -lm
main.o:  main.c my_mat.h 
	$(GC) $(WARN) -c main.c
my_mat.so:$(MY)
	$(GC) -shared -fPIC -o my_mat.so  $(MY)
my_mat.a:  $(MY) 
	$(AR) -rcs my_mat.a  $(MY) 
my_mat.o: my_mat.c my_mat.h
		$(GC) $(WARN) -c my_mat.c 
clean: 
	rm -f *.o *.a *.so connections
