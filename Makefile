
# Variables to control Makefile operation

CC = g++
CFLAGS = -Wall -g

binary-search: binary-search.o
	$(CC) $(CFLAGS) -o binary-search binary-search.o

binary-search.o: binary-search.cpp
	$(CC) $(CFLAGS) -c binary-search.cpp

clean:
	rm -rf binary-search binary-search.o
