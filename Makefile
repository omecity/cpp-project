CC=g++
CFLAGS=-Wall -g -pthread
GTEST_LIB=-lgtest -lgtest_main

all: main test

main: main.o addition.o
	$(CC) -o main main.o addition.o $(CFLAGS)

test: test.o addition.o
	$(CC) -o test test.o addition.o $(CFLAGS) $(GTEST_LIB)

%.o: %.cpp
	$(CC) -c $< -o $@ $(CFLAGS)

clean:
	rm -f *.o main test
