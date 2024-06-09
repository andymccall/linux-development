#### Compling

Compile using llvm-mos

    $ mos-cx16-clang -Os -o ADDITION.PRG addition.c

Compile using cc65

    $ cl65 -t cx16 -o ADDITION.PRG -l addition.list addition.c

#### Running in x16emu Emulator

    $ x16emu -prg ADDITION.PRG

Once the emulator is running, type "RUN"