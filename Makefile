CC = g++
CFLAGS = -c -Wall

all: calculator
calculator: main.o calculator.o
	$(CC) main.o calculator.o -o main

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp


calculator.o: calculator.cpp
	$(CC) $(CFLAGS) calculator.cpp

clean:
	rm -rf *.o calculator
