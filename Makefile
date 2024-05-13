CC=clang
PY=python
CFLAGS=-g -Werror -O2
SRCS=$(wildcard c/*.c)
OBJS=$(patsubst c/%.c, c/%.o, $(SRCS))

py3:
	$(PY) py/main.py

clang: main

runc:
	./c/main

main: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf *.o
