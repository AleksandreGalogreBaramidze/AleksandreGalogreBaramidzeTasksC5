#
#
#
CC=gcc
CFLAGS=-Wall

all : concat
.PHONY : all

concat: getline.o concat.o main.o
	$(CC) $(CFLAGS) -o concat getline.o concat.o main.o

getline.o: getline.c
	$(CC) $(CFLAGS) -c -o getline.o getline.c
	
concat.o: concat.c
	$(CC) $(CFLAGS) -c -o concat.o concat.c
	
main.o: main.c
	$(CC) $(CFLAGS) -c -o main.o main.c
