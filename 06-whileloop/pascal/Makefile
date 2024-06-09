# ----------------------------
# Makefile Options
# ----------------------------

FPC       = fpc
FPC_FLAGS =
RM        = rm -f

default: all

all:
	mkdir -p bin
	mkdir -p units
	$(FPC) $(FPC) src/whileloop.pas -FUunits -obin/whileloop
	
clean:
	rm -rf bin
	rm -rf units