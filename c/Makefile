CC=clang
CFLAGS=-g -Werror -O2
SRCS=$(wildcard *.c)
OBJS=$(patsubst %.c, %.o, $(SRCS))


all: main

run:
	./main

main: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o
