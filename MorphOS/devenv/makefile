# -lSDL3_ttf glue libraries for sdl3_ttf.library
#
#   lib/libSDL3_ttf.a             programs
#   lib/libb32/libSDL3_ttf.a      -mresident32 code
#   lib/libb32/libSDL3_ttf-nc.a   -mresident32, no constructor (SDL3TTFBase set by hand)
#
# Each archive = cvinclude.pl glue from ../sdk/fd/sdl3_ttf_lib.fd + sdl-startup.o

CC      = ppc-morphos-gcc-9 -noixemul
INCLUDE = -I../../include -I/gg/usr/local/include -I../sdk
# Library version = SDL_ttf version (../TTF_version.h)
TTFVERSION_H = ../../include/SDL3_ttf/SDL_ttf.h
TTFVERSION   = $(shell awk '$$2 == "SDL_TTF_MAJOR_VERSION" { ma = $$3 } $$2 == "SDL_TTF_MINOR_VERSION" { mi = $$3 } $$2 == "SDL_TTF_MICRO_VERSION" { mc = $$3 } END { printf "-DTTF_LIB_MAJOR=%d -DTTF_LIB_MINOR=%d -DTTF_LIB_MICRO=%d -DTTF_LIB_REVISION=%d", ma, mi, mc, mi * 100 + mc }' $(TTFVERSION_H))
CFLAGS  = -mcpu=750 -mtune=7450 -O2 $(INCLUDE) -Wall -Wno-pointer-sign -fno-strict-aliasing $(TTFVERSION)
AR      = ppc-morphos-ar
CVI     = /gg/bin/cvinclude.pl
FD      = ../sdk/fd/sdl3_ttf_lib.fd
CLIB    = ../sdk/clib/sdl3_ttf_protos.h
DEPS    = sdl-startup.c ../TTF_version.h $(TTFVERSION_H)

COMPILING = @echo "compiling $@..."
ARCHIVING = @echo "archiving $@..."

all: lib/libSDL3_ttf.a lib/libb32/libSDL3_ttf.a lib/libb32/libSDL3_ttf-nc.a

sdl-startup.o: $(DEPS)
	$(COMPILING)
	@$(CC) $(CFLAGS) -o $@ -c sdl-startup.c

sdl-startup-brel.o: $(DEPS)
	$(COMPILING)
	@$(CC) $(CFLAGS) -mresident32 -o $@ -c sdl-startup.c

sdl-startup-brel-nc.o: $(DEPS)
	$(COMPILING)
	@$(CC) $(CFLAGS) -mresident32 -o $@ -c sdl-startup.c -D__NO_SDL_CONSTRUCTORS

lib/libSDL3_ttf.a: sdl-startup.o $(FD) $(CLIB)
	$(ARCHIVING)
	@mkdir -p lib
	@-rm -f $@
	@$(CVI) --fd=$(FD) --clib=$(CLIB) --gluelib=$@ > /dev/null
	@$(AR) crus $@ sdl-startup.o

lib/libb32/libSDL3_ttf.a: sdl-startup-brel.o $(FD) $(CLIB)
	$(ARCHIVING)
	@mkdir -p lib/libb32
	@-rm -f $@
	@$(CVI) --fd=$(FD) --clib=$(CLIB) --brelgluelib=$@ > /dev/null
	@$(AR) crus $@ sdl-startup-brel.o

lib/libb32/libSDL3_ttf-nc.a: sdl-startup-brel-nc.o $(FD) $(CLIB)
	$(ARCHIVING)
	@mkdir -p lib/libb32
	@-rm -f $@
	@$(CVI) --fd=$(FD) --clib=$(CLIB) --brelgluelib=$@ > /dev/null
	@$(AR) crus $@ sdl-startup-brel-nc.o

clean:
	@-rm -rf lib *.s *.o

dump:
	ppc-morphos-objdump --disassemble-all --reloc lib/libSDL3_ttf.a >lib/libSDL3_ttf.s
