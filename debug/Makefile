# Set compiler
CC = g++

#Compile flags (-c to output object file .o)
CFLAGS = -c -Wall -Wextra -Wpedantic -std=c++11

all: main.exe

debug: CFLAGS += -DDEBUG -g
debug: main.exe 

main.exe: main.o 
	$(CC) main.o -o main.exe

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm *.o main.exe