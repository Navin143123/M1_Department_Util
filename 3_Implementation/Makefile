#Target name : Dependencies
#<TAB>Command
SRC= test_dep.c\
multifile/dep.c\
multifile/main.c

OBJ=SRC= test_dep.o\
dep.o\
main.o

INC= src

CFLAGS= -I$(INC)

a.out : $(OBJ) 
	$(cc) $^ -I$(INC) -o $@

%.o:multifile/%.c 
	gcc $^ -I$(INC) -c	
	
run : target
	./a.out

clean:
	rm a.out *.o multifile/*.o

#CXX=cpp
#CC=gcc
#AS=as
#LD=ld
#-DMACRO=value
#-g -v
#ASFLAGS
#LDFLAGS=-Lpath_lib -lname
