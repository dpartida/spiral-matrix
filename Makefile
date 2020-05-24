#Makefile to compile spiral matrix program

CC = gcc
CFLAGS = -std=c99 -Wall -Werror -g

BIN = shell

all:
	$(CC) $(CFLAGS) -o $(BIN) shell.c intvalidation.c intvalidation.h
clean:
	rm $(BIN)
