/*
 * -lSDL3_ttf glue: opens sdl3_ttf.library for the program (constructor,
 * after the -lSDL3 one which opens sdl3.library).
 *
 * Built three times (see makefile): normal, -mresident32 and
 * -mresident32 -D__NO_SDL_CONSTRUCTORS.
 */

#include <constructor.h>

#include <proto/exec.h>

#include "../TTF_version.h"

#if defined(__NO_SDL_CONSTRUCTORS)
extern struct Library *SDL3TTFBase;
#else
int _INIT_4_SDL3TTFBase(void) __attribute__((alias("__CSTP_init_SDL3TTFBase")));
void _EXIT_4_SDL3TTFBase(void) __attribute__((alias("__DSTP_cleanup_SDL3TTFBase")));

/* From the -lSDL3 glue */
extern void __SDL3_OpenLibError(ULONG version, const char *name, ULONG revision);

struct Library *SDL3TTFBase;

static CONSTRUCTOR_P(init_SDL3TTFBase, 102)
{
	static const char libname[] = "sdl3_ttf.library";
	struct Library *base = OpenLibrary((STRPTR)libname, VERSION);

	/* REVISION = SDL_ttf minor * 100 + micro: an older 3.x would
	   lack the vectors this program was linked against. */
	if (base && !LIB_MINVER(base, VERSION, REVISION))
	{
		CloseLibrary(base);
		base = NULL;
	}

	SDL3TTFBase = base;

	if (base == NULL)
	{
		__SDL3_OpenLibError(VERSION, libname, REVISION);
	}

	return (base == NULL);
}

static DESTRUCTOR_P(cleanup_SDL3TTFBase, 102)
{
	CloseLibrary(SDL3TTFBase);
	SDL3TTFBase = NULL;
}
#endif
