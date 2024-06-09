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
	$(FPC) $(FPC) src/hellostring.pas -FUunits -obin/hellostring
	
clean:
	rm -rf bin
	rm -rf units