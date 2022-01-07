/* Automatically generated header! Do not edit! */

#ifndef _PPCINLINE_SDL2_TTF_H
#define _PPCINLINE_SDL2_TTF_H

#ifndef __PPCINLINE_MACROS_H
#include <ppcinline/macros.h>
#endif /* !__PPCINLINE_MACROS_H */

#ifndef SDL2_TTF_BASE_NAME
#define SDL2_TTF_BASE_NAME SDL2TTFBase
#endif /* !SDL2_TTF_BASE_NAME */

#define TTF_Linked_Version() \
	({ \
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((const SDL_version *(*)(void))*(void**)(__base - 28))());\
	})

#define TTF_ByteSwappedUNICODE(__p0) \
	({ \
		SDL_bool  __t__p0 = __p0;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((void (*)(SDL_bool ))*(void**)(__base - 34))(__t__p0));\
	})

#define TTF_Init() \
	({ \
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(void))*(void**)(__base - 40))());\
	})

#define TTF_OpenFont(__p0, __p1) \
	({ \
		const char * __t__p0 = __p0;\
		int  __t__p1 = __p1;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((TTF_Font *(*)(const char *, int ))*(void**)(__base - 46))(__t__p0, __t__p1));\
	})

#define TTF_OpenFontIndex(__p0, __p1, __p2) \
	({ \
		const char * __t__p0 = __p0;\
		int  __t__p1 = __p1;\
		long  __t__p2 = __p2;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((TTF_Font *(*)(const char *, int , long ))*(void**)(__base - 52))(__t__p0, __t__p1, __t__p2));\
	})

#define TTF_OpenFontRW(__p0, __p1, __p2) \
	({ \
		SDL_RWops * __t__p0 = __p0;\
		int  __t__p1 = __p1;\
		int  __t__p2 = __p2;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((TTF_Font *(*)(SDL_RWops *, int , int ))*(void**)(__base - 58))(__t__p0, __t__p1, __t__p2));\
	})

#define TTF_OpenFontIndexRW(__p0, __p1, __p2, __p3) \
	({ \
		SDL_RWops * __t__p0 = __p0;\
		int  __t__p1 = __p1;\
		int  __t__p2 = __p2;\
		long  __t__p3 = __p3;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((TTF_Font *(*)(SDL_RWops *, int , int , long ))*(void**)(__base - 64))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define TTF_OpenFontDPI(__p0, __p1, __p2, __p3) \
	({ \
		const char * __t__p0 = __p0;\
		int  __t__p1 = __p1;\
		unsigned int  __t__p2 = __p2;\
		unsigned int  __t__p3 = __p3;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((TTF_Font *(*)(const char *, int , unsigned int , unsigned int ))*(void**)(__base - 70))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define TTF_OpenFontIndexDPI(__p0, __p1, __p2, __p3, __p4) \
	({ \
		const char * __t__p0 = __p0;\
		int  __t__p1 = __p1;\
		long  __t__p2 = __p2;\
		unsigned int  __t__p3 = __p3;\
		unsigned int  __t__p4 = __p4;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((TTF_Font *(*)(const char *, int , long , unsigned int , unsigned int ))*(void**)(__base - 76))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4));\
	})

#define TTF_OpenFontDPIRW(__p0, __p1, __p2, __p3, __p4) \
	({ \
		SDL_RWops * __t__p0 = __p0;\
		int  __t__p1 = __p1;\
		int  __t__p2 = __p2;\
		unsigned int  __t__p3 = __p3;\
		unsigned int  __t__p4 = __p4;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((TTF_Font *(*)(SDL_RWops *, int , int , unsigned int , unsigned int ))*(void**)(__base - 82))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4));\
	})

#define TTF_OpenFontIndexDPIRW(__p0, __p1, __p2, __p3, __p4, __p5) \
	({ \
		SDL_RWops * __t__p0 = __p0;\
		int  __t__p1 = __p1;\
		int  __t__p2 = __p2;\
		long  __t__p3 = __p3;\
		unsigned int  __t__p4 = __p4;\
		unsigned int  __t__p5 = __p5;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((TTF_Font *(*)(SDL_RWops *, int , int , long , unsigned int , unsigned int ))*(void**)(__base - 88))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5));\
	})

#define TTF_SetFontSize(__p0, __p1) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		int  __t__p1 = __p1;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(TTF_Font *, int ))*(void**)(__base - 94))(__t__p0, __t__p1));\
	})

#define TTF_SetFontSizeDPI(__p0, __p1, __p2, __p3) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		int  __t__p1 = __p1;\
		unsigned int  __t__p2 = __p2;\
		unsigned int  __t__p3 = __p3;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(TTF_Font *, int , unsigned int , unsigned int ))*(void**)(__base - 100))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define TTF_GetFontStyle(__p0) \
	({ \
		const TTF_Font * __t__p0 = __p0;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(const TTF_Font *))*(void**)(__base - 106))(__t__p0));\
	})

#define TTF_SetFontStyle(__p0, __p1) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		int  __t__p1 = __p1;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((void (*)(TTF_Font *, int ))*(void**)(__base - 112))(__t__p0, __t__p1));\
	})

#define TTF_GetFontOutline(__p0) \
	({ \
		const TTF_Font * __t__p0 = __p0;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(const TTF_Font *))*(void**)(__base - 118))(__t__p0));\
	})

#define TTF_SetFontOutline(__p0, __p1) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		int  __t__p1 = __p1;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((void (*)(TTF_Font *, int ))*(void**)(__base - 124))(__t__p0, __t__p1));\
	})

#define TTF_GetFontHinting(__p0) \
	({ \
		const TTF_Font * __t__p0 = __p0;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(const TTF_Font *))*(void**)(__base - 130))(__t__p0));\
	})

#define TTF_SetFontHinting(__p0, __p1) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		int  __t__p1 = __p1;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((void (*)(TTF_Font *, int ))*(void**)(__base - 136))(__t__p0, __t__p1));\
	})

#define TTF_FontHeight(__p0) \
	({ \
		const TTF_Font * __t__p0 = __p0;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(const TTF_Font *))*(void**)(__base - 142))(__t__p0));\
	})

#define TTF_FontAscent(__p0) \
	({ \
		const TTF_Font * __t__p0 = __p0;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(const TTF_Font *))*(void**)(__base - 148))(__t__p0));\
	})

#define TTF_FontDescent(__p0) \
	({ \
		const TTF_Font * __t__p0 = __p0;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(const TTF_Font *))*(void**)(__base - 154))(__t__p0));\
	})

#define TTF_FontLineSkip(__p0) \
	({ \
		const TTF_Font * __t__p0 = __p0;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(const TTF_Font *))*(void**)(__base - 160))(__t__p0));\
	})

#define TTF_GetFontKerning(__p0) \
	({ \
		const TTF_Font * __t__p0 = __p0;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(const TTF_Font *))*(void**)(__base - 166))(__t__p0));\
	})

#define TTF_SetFontKerning(__p0, __p1) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		int  __t__p1 = __p1;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((void (*)(TTF_Font *, int ))*(void**)(__base - 172))(__t__p0, __t__p1));\
	})

#define TTF_FontFaces(__p0) \
	({ \
		const TTF_Font * __t__p0 = __p0;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((long (*)(const TTF_Font *))*(void**)(__base - 178))(__t__p0));\
	})

#define TTF_FontFaceIsFixedWidth(__p0) \
	({ \
		const TTF_Font * __t__p0 = __p0;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(const TTF_Font *))*(void**)(__base - 184))(__t__p0));\
	})

#define TTF_FontFaceFamilyName(__p0) \
	({ \
		const TTF_Font * __t__p0 = __p0;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((char *(*)(const TTF_Font *))*(void**)(__base - 190))(__t__p0));\
	})

#define TTF_FontFaceStyleName(__p0) \
	({ \
		const TTF_Font * __t__p0 = __p0;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((char *(*)(const TTF_Font *))*(void**)(__base - 196))(__t__p0));\
	})

#define TTF_GlyphIsProvided(__p0, __p1) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		Uint16  __t__p1 = __p1;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(TTF_Font *, Uint16 ))*(void**)(__base - 202))(__t__p0, __t__p1));\
	})

#define TTF_GlyphIsProvided32(__p0, __p1) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		Uint32  __t__p1 = __p1;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(TTF_Font *, Uint32 ))*(void**)(__base - 208))(__t__p0, __t__p1));\
	})

#define TTF_GlyphMetrics(__p0, __p1, __p2, __p3, __p4, __p5, __p6) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		Uint16  __t__p1 = __p1;\
		int * __t__p2 = __p2;\
		int * __t__p3 = __p3;\
		int * __t__p4 = __p4;\
		int * __t__p5 = __p5;\
		int * __t__p6 = __p6;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(TTF_Font *, Uint16 , int *, int *, int *, int *, int *))*(void**)(__base - 214))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6));\
	})

#define TTF_GlyphMetrics32(__p0, __p1, __p2, __p3, __p4, __p5, __p6) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		Uint32  __t__p1 = __p1;\
		int * __t__p2 = __p2;\
		int * __t__p3 = __p3;\
		int * __t__p4 = __p4;\
		int * __t__p5 = __p5;\
		int * __t__p6 = __p6;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(TTF_Font *, Uint32 , int *, int *, int *, int *, int *))*(void**)(__base - 220))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4, __t__p5, __t__p6));\
	})

#define TTF_SizeText(__p0, __p1, __p2, __p3) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		const char * __t__p1 = __p1;\
		int * __t__p2 = __p2;\
		int * __t__p3 = __p3;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(TTF_Font *, const char *, int *, int *))*(void**)(__base - 226))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define TTF_SizeUTF8(__p0, __p1, __p2, __p3) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		const char * __t__p1 = __p1;\
		int * __t__p2 = __p2;\
		int * __t__p3 = __p3;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(TTF_Font *, const char *, int *, int *))*(void**)(__base - 232))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define TTF_SizeUNICODE(__p0, __p1, __p2, __p3) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		const Uint16 * __t__p1 = __p1;\
		int * __t__p2 = __p2;\
		int * __t__p3 = __p3;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(TTF_Font *, const Uint16 *, int *, int *))*(void**)(__base - 238))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define TTF_MeasureText(__p0, __p1, __p2, __p3, __p4) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		const char * __t__p1 = __p1;\
		int  __t__p2 = __p2;\
		int * __t__p3 = __p3;\
		int * __t__p4 = __p4;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(TTF_Font *, const char *, int , int *, int *))*(void**)(__base - 244))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4));\
	})

#define TTF_MeasureUTF8(__p0, __p1, __p2, __p3, __p4) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		const char * __t__p1 = __p1;\
		int  __t__p2 = __p2;\
		int * __t__p3 = __p3;\
		int * __t__p4 = __p4;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(TTF_Font *, const char *, int , int *, int *))*(void**)(__base - 250))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4));\
	})

#define TTF_MeasureUNICODE(__p0, __p1, __p2, __p3, __p4) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		const Uint16 * __t__p1 = __p1;\
		int  __t__p2 = __p2;\
		int * __t__p3 = __p3;\
		int * __t__p4 = __p4;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(TTF_Font *, const Uint16 *, int , int *, int *))*(void**)(__base - 256))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4));\
	})

#define TTF_RenderText_Solid(__p0, __p1, __p2) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		const char * __t__p1 = __p1;\
		SDL_Color  __t__p2 = __p2;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(TTF_Font *, const char *, SDL_Color ))*(void**)(__base - 262))(__t__p0, __t__p1, __t__p2));\
	})

#define TTF_RenderUTF8_Solid(__p0, __p1, __p2) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		const char * __t__p1 = __p1;\
		SDL_Color  __t__p2 = __p2;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(TTF_Font *, const char *, SDL_Color ))*(void**)(__base - 268))(__t__p0, __t__p1, __t__p2));\
	})

#define TTF_RenderUNICODE_Solid(__p0, __p1, __p2) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		const Uint16 * __t__p1 = __p1;\
		SDL_Color  __t__p2 = __p2;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(TTF_Font *, const Uint16 *, SDL_Color ))*(void**)(__base - 274))(__t__p0, __t__p1, __t__p2));\
	})

#define TTF_RenderText_Solid_Wrapped(__p0, __p1, __p2, __p3) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		const char * __t__p1 = __p1;\
		SDL_Color  __t__p2 = __p2;\
		Uint32  __t__p3 = __p3;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(TTF_Font *, const char *, SDL_Color , Uint32 ))*(void**)(__base - 280))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define TTF_RenderUTF8_Solid_Wrapped(__p0, __p1, __p2, __p3) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		const char * __t__p1 = __p1;\
		SDL_Color  __t__p2 = __p2;\
		Uint32  __t__p3 = __p3;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(TTF_Font *, const char *, SDL_Color , Uint32 ))*(void**)(__base - 286))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define TTF_RenderUNICODE_Solid_Wrapped(__p0, __p1, __p2, __p3) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		const Uint16 * __t__p1 = __p1;\
		SDL_Color  __t__p2 = __p2;\
		Uint32  __t__p3 = __p3;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(TTF_Font *, const Uint16 *, SDL_Color , Uint32 ))*(void**)(__base - 292))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define TTF_RenderGlyph_Solid(__p0, __p1, __p2) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		Uint16  __t__p1 = __p1;\
		SDL_Color  __t__p2 = __p2;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(TTF_Font *, Uint16 , SDL_Color ))*(void**)(__base - 298))(__t__p0, __t__p1, __t__p2));\
	})

#define TTF_RenderGlyph32_Solid(__p0, __p1, __p2) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		Uint32  __t__p1 = __p1;\
		SDL_Color  __t__p2 = __p2;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(TTF_Font *, Uint32 , SDL_Color ))*(void**)(__base - 304))(__t__p0, __t__p1, __t__p2));\
	})

#define TTF_RenderText_Shaded(__p0, __p1, __p2, __p3) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		const char * __t__p1 = __p1;\
		SDL_Color  __t__p2 = __p2;\
		SDL_Color  __t__p3 = __p3;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(TTF_Font *, const char *, SDL_Color , SDL_Color ))*(void**)(__base - 310))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define TTF_RenderUTF8_Shaded(__p0, __p1, __p2, __p3) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		const char * __t__p1 = __p1;\
		SDL_Color  __t__p2 = __p2;\
		SDL_Color  __t__p3 = __p3;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(TTF_Font *, const char *, SDL_Color , SDL_Color ))*(void**)(__base - 316))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define TTF_RenderUNICODE_Shaded(__p0, __p1, __p2, __p3) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		const Uint16 * __t__p1 = __p1;\
		SDL_Color  __t__p2 = __p2;\
		SDL_Color  __t__p3 = __p3;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(TTF_Font *, const Uint16 *, SDL_Color , SDL_Color ))*(void**)(__base - 322))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define TTF_RenderText_Shaded_Wrapped(__p0, __p1, __p2, __p3, __p4) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		const char * __t__p1 = __p1;\
		SDL_Color  __t__p2 = __p2;\
		SDL_Color  __t__p3 = __p3;\
		Uint32  __t__p4 = __p4;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(TTF_Font *, const char *, SDL_Color , SDL_Color , Uint32 ))*(void**)(__base - 328))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4));\
	})

#define TTF_RenderUTF8_Shaded_Wrapped(__p0, __p1, __p2, __p3, __p4) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		const char * __t__p1 = __p1;\
		SDL_Color  __t__p2 = __p2;\
		SDL_Color  __t__p3 = __p3;\
		Uint32  __t__p4 = __p4;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(TTF_Font *, const char *, SDL_Color , SDL_Color , Uint32 ))*(void**)(__base - 334))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4));\
	})

#define TTF_RenderUNICODE_Shaded_Wrapped(__p0, __p1, __p2, __p3, __p4) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		const Uint16 * __t__p1 = __p1;\
		SDL_Color  __t__p2 = __p2;\
		SDL_Color  __t__p3 = __p3;\
		Uint32  __t__p4 = __p4;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(TTF_Font *, const Uint16 *, SDL_Color , SDL_Color , Uint32 ))*(void**)(__base - 340))(__t__p0, __t__p1, __t__p2, __t__p3, __t__p4));\
	})

#define TTF_RenderGlyph_Shaded(__p0, __p1, __p2, __p3) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		Uint16  __t__p1 = __p1;\
		SDL_Color  __t__p2 = __p2;\
		SDL_Color  __t__p3 = __p3;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(TTF_Font *, Uint16 , SDL_Color , SDL_Color ))*(void**)(__base - 346))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define TTF_RenderGlyph32_Shaded(__p0, __p1, __p2, __p3) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		Uint32  __t__p1 = __p1;\
		SDL_Color  __t__p2 = __p2;\
		SDL_Color  __t__p3 = __p3;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(TTF_Font *, Uint32 , SDL_Color , SDL_Color ))*(void**)(__base - 352))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define TTF_RenderText_Blended(__p0, __p1, __p2) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		const char * __t__p1 = __p1;\
		SDL_Color  __t__p2 = __p2;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(TTF_Font *, const char *, SDL_Color ))*(void**)(__base - 358))(__t__p0, __t__p1, __t__p2));\
	})

#define TTF_RenderUTF8_Blended(__p0, __p1, __p2) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		const char * __t__p1 = __p1;\
		SDL_Color  __t__p2 = __p2;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(TTF_Font *, const char *, SDL_Color ))*(void**)(__base - 364))(__t__p0, __t__p1, __t__p2));\
	})

#define TTF_RenderUNICODE_Blended(__p0, __p1, __p2) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		const Uint16 * __t__p1 = __p1;\
		SDL_Color  __t__p2 = __p2;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(TTF_Font *, const Uint16 *, SDL_Color ))*(void**)(__base - 370))(__t__p0, __t__p1, __t__p2));\
	})

#define TTF_RenderText_Blended_Wrapped(__p0, __p1, __p2, __p3) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		const char * __t__p1 = __p1;\
		SDL_Color  __t__p2 = __p2;\
		Uint32  __t__p3 = __p3;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(TTF_Font *, const char *, SDL_Color , Uint32 ))*(void**)(__base - 376))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define TTF_RenderUTF8_Blended_Wrapped(__p0, __p1, __p2, __p3) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		const char * __t__p1 = __p1;\
		SDL_Color  __t__p2 = __p2;\
		Uint32  __t__p3 = __p3;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(TTF_Font *, const char *, SDL_Color , Uint32 ))*(void**)(__base - 382))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define TTF_RenderUNICODE_Blended_Wrapped(__p0, __p1, __p2, __p3) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		const Uint16 * __t__p1 = __p1;\
		SDL_Color  __t__p2 = __p2;\
		Uint32  __t__p3 = __p3;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(TTF_Font *, const Uint16 *, SDL_Color , Uint32 ))*(void**)(__base - 388))(__t__p0, __t__p1, __t__p2, __t__p3));\
	})

#define TTF_RenderGlyph_Blended(__p0, __p1, __p2) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		Uint16  __t__p1 = __p1;\
		SDL_Color  __t__p2 = __p2;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(TTF_Font *, Uint16 , SDL_Color ))*(void**)(__base - 394))(__t__p0, __t__p1, __t__p2));\
	})

#define TTF_RenderGlyph32_Blended(__p0, __p1, __p2) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		Uint32  __t__p1 = __p1;\
		SDL_Color  __t__p2 = __p2;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((SDL_Surface *(*)(TTF_Font *, Uint32 , SDL_Color ))*(void**)(__base - 400))(__t__p0, __t__p1, __t__p2));\
	})

#define TTF_SetDirection(__p0) \
	({ \
		int  __t__p0 = __p0;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(int ))*(void**)(__base - 406))(__t__p0));\
	})

#define TTF_SetScript(__p0) \
	({ \
		int  __t__p0 = __p0;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(int ))*(void**)(__base - 412))(__t__p0));\
	})

#define TTF_CloseFont(__p0) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((void (*)(TTF_Font *))*(void**)(__base - 418))(__t__p0));\
	})

#define TTF_Quit() \
	({ \
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((void (*)(void))*(void**)(__base - 424))());\
	})

#define TTF_WasInit() \
	({ \
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(void))*(void**)(__base - 430))());\
	})

#define TTF_GetFontKerningSize(__p0, __p1, __p2) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		int  __t__p1 = __p1;\
		int  __t__p2 = __p2;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(TTF_Font *, int , int ))*(void**)(__base - 436))(__t__p0, __t__p1, __t__p2));\
	})

#define TTF_GetFontKerningSizeGlyphs(__p0, __p1, __p2) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		Uint16  __t__p1 = __p1;\
		Uint16  __t__p2 = __p2;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(TTF_Font *, Uint16 , Uint16 ))*(void**)(__base - 442))(__t__p0, __t__p1, __t__p2));\
	})

#define TTF_GetFontKerningSizeGlyphs32(__p0, __p1, __p2) \
	({ \
		TTF_Font * __t__p0 = __p0;\
		Uint32  __t__p1 = __p1;\
		Uint32  __t__p2 = __p2;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((int (*)(TTF_Font *, Uint32 , Uint32 ))*(void**)(__base - 448))(__t__p0, __t__p1, __t__p2));\
	})

#define TTF_GetFreeTypeVersion(__p0, __p1, __p2) \
	({ \
		int * __t__p0 = __p0;\
		int * __t__p1 = __p1;\
		int * __t__p2 = __p2;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((void (*)(int *, int *, int *))*(void**)(__base - 454))(__t__p0, __t__p1, __t__p2));\
	})

#define TTF_GetHarfBuzzVersion(__p0, __p1, __p2) \
	({ \
		int * __t__p0 = __p0;\
		int * __t__p1 = __p1;\
		int * __t__p2 = __p2;\
		long __base = (long)(SDL2_TTF_BASE_NAME);\
		__asm volatile("mr 12,%0": :"r"(__base):"r12");\
		(((void (*)(int *, int *, int *))*(void**)(__base - 460))(__t__p0, __t__p1, __t__p2));\
	})

#endif /* !_PPCINLINE_SDL2_TTF_H */
