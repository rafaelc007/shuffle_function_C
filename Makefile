CFLAGS=-ggdb3 -Wall -Werror -pedantic -std=gnu99
MY_OBJS= shuffle.o

test-shuff: shuffle.o
	gcc -o test -ggdb3 shuffle.o test.c

clean:
	rm test.o shuffle.o *~
