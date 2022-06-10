#
#
#
CC=gcc
CFLAGS=-Wall

all : string_end
.PHONY : all

string_end: getline.o strend.o main.o
	$(CC) $(CFLAGS) -o string_end getline.o strend.o main.o

getline.o: getline.c
	$(CC) $(CFLAGS) -c -o getline.o getline.c
	
strend.o: strend.c
	$(CC) $(CFLAGS) -c -o strend.o strend.c
	
main.o: main.c
	$(CC) $(CFLAGS) -c -o main.o main.c
