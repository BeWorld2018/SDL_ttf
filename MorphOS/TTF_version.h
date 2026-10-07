/*
 * sdl3_ttf.library version = SDL_ttf version: VERSION = major,
 * REVISION = minor * 100 + micro (SDL_ttf 3.3.0 -> 3.300).
 *
 * TTF_LIB_MAJOR/MINOR/MICRO/REVISION come from include/SDL3_ttf/SDL_ttf.h,
 * passed by Makefile.mos and devenv/makefile.
 */
#if !defined(TTF_LIB_MAJOR) || !defined(TTF_LIB_MINOR) || !defined(TTF_LIB_MICRO) || !defined(TTF_LIB_REVISION)
#error "TTF_LIB_MAJOR/MINOR/MICRO/REVISION not defined (see Makefile.mos)"
#endif

#define	str(s) #s
#define	xstr(s) str(s)
#define	VERSION	TTF_LIB_MAJOR
#define	REVISION	TTF_LIB_REVISION
#define	VERSTAG	"\0$VER: sdl3_ttf.library " xstr(VERSION) "." xstr(REVISION) " (" __AMIGADATE__ ") SDL_ttf " xstr(TTF_LIB_MAJOR) "." xstr(TTF_LIB_MINOR) "." xstr(TTF_LIB_MICRO) " (c) Bruno Peloille"
