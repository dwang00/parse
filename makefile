all: main.o functions.o
	gcc -o parse main.o functions.o

main.o: main.c header.h
	gcc -c main.c header.h

functions.o: functions.c
	gcc -c functions.c

run:
	./parse

clean:
	del *.o
	del *.exe
	del *.gch
