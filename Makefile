OBJS = main
CFLAG = -Wall 
CC = gcc 

code:${OBJ}
	${CC} code.c ${CFLAG} -o ${OBJS} 

clean:
	-rm -f *.o
