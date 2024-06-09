section        .text
global         _start

_start:
    mov edx, textlength
    mov ecx, text

    mov ebx, 1

    mov eax, 4  
    int 0x80

    mov eax, 1
    int 0x80

section          .data
    text         db "Hello, world!"
    textlength   equ $ -text