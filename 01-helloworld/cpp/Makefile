# ----------------------------
# Makefile Options
# ----------------------------

CC       = g++
CFLAGS   = -Wall -Wextra -Oz -Wno-unused-parameter
CXXFLAGS = -Wall -Wextra -Oz -Wno-unused-parameter
RM       = rm -f

default: all

all:
	mkdir -p bin
	$(CC) $(CFLAGS) src/helloworld.cpp -o bin/helloworld

clean:
	rm -rf bin