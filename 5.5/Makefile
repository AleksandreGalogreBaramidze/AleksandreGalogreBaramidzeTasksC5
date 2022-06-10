#
#
#
CC=gcc
CFLAGS=-Wall

all : simple_forms
.PHONY : all

simple_forms: main.o
	$(CC) -o simple_forms main.o

main.o: main.c
	$(CC) -c -o main.o main.c
