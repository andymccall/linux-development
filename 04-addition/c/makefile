# ----------------------------
# Makefile Options
# ----------------------------

CC       = gcc
CFLAGS   = -Wall -Wextra -Oz -Wno-unused-parameter
CXXFLAGS = -Wall -Wextra -Oz -Wno-unused-parameter
RM       = rm -f

default: all

all:
	mkdir -p bin
	$(CC) $(CFLAGS) src/addition.c -o bin/addition

clean:
	rm -rf bin