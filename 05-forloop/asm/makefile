# ----------------------------
# Makefile Options
# ----------------------------

ASM       = nasm
ASM_FLAGS = -f elf32
LD        = ld
LD_FLAGS  = -m elf_i386
RM        = rm -f

default: all

all:
	mkdir -p bin
	mkdir -p obj
	$(ASM) $(ASM_FLAGS) src/helloworld.asm -o obj/helloworld.o
	$(LD) $(LD_FLAGS) obj/helloworld.o -o bin/helloworld

clean:
	rm -rf bin
	rm -rf obj