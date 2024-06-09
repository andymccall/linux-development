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
	$(FPC) $(FPC) src/forloop.pas -FUunits -obin/forloop
	
clean:
	rm -rf bin
	rm -rf units