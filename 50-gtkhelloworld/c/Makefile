# ----------------------------
# Makefile Options
# ----------------------------

CC        = gcc
CFLAGS    = -Wall -Wextra -Oz -Wno-unused-parameter
GTK_FLAGS = `pkg-config --cflags gtk+-3.0` `pkg-config --libs gtk+-3.0`
RM        = rm -f

default: all

all:
	mkdir -p bin
	$(CC) $(CFLAGS) src/gtkhellostring.c -o bin/gtkhellostring $(GTK_FLAGS)

clean:
	rm -rf bin