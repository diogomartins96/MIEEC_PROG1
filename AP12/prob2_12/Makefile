all: datas.o programa.c
	gcc programa.c datas.o -o programa

datas.o: datas.c datas.h
	gcc -c datas.c

clean:
	rm *.o programa *~