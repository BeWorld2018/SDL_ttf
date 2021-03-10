#ifndef SDL2_TTF_PROTOS
#define SDL2_TTF_PROTOS

#ifndef _SDL_H
#include <SDL/SDL.h>
#endif

//#include <SDL/SDL_ttf.h>

#ifdef __cplusplus
extern "C" {
#endif

const SDL_version *TTF_Linked_Version(void);
void TTF_ByteSwappedUNICODE(int swapped);
int TTF_Init(void);
TTF_Font *TTF_OpenFont(const char *file, int ptsize);
TTF_Font *TTF_OpenFontIndex(const char *file, int ptsize, long index);
TTF_Font *TTF_OpenFontRW(SDL_RWops *src, int freesrc, int ptsize);
TTF_Font *TTF_OpenFontIndexRW(SDL_RWops *src, int freesrc, int ptsize, long index);
TTF_Font *TTF_OpenFontDPI(const char *file, int ptsize, unsigned int hdpi, unsigned int vdpi);
TTF_Font *TTF_OpenFontIndexDPI(const char *file, int ptsize, long index, unsigned int hdpi, unsigned int vdpi);
TTF_Font *TTF_OpenFontDPIRW(SDL_RWops *src, int freesrc, int ptsize, unsigned int hdpi, unsigned int vdpi);
TTF_Font *TTF_OpenFontIndexDPIRW(SDL_RWops *src, int freesrc, int ptsize, long index, unsigned int hdpi, unsigned int vdpi);
int TTF_SetFontSize(TTF_Font *font, int ptsize);
int TTF_SetFontSizeDPI(TTF_Font *font, int ptsize, unsigned int hdpi, unsigned int vdpi);
int TTF_GetFontStyle(const TTF_Font *font);
void TTF_SetFontStyle(TTF_Font *font, int style);
int TTF_GetFontOutline(const TTF_Font *font);
void TTF_SetFontOutline(TTF_Font *font, int outline);
int TTF_GetFontHinting(const TTF_Font *font);
void TTF_SetFontHinting(TTF_Font *font, int hinting);
int TTF_FontHeight(const TTF_Font *font);
int TTF_FontAscent(const TTF_Font *font);
int TTF_FontDescent(const TTF_Font *font);
int TTF_FontLineSkip(const TTF_Font *font);
int TTF_GetFontKerning(const TTF_Font *font);
void TTF_SetFontKerning(TTF_Font *font, int allowed);
long TTF_FontFaces(const TTF_Font *font);
int TTF_FontFaceIsFixedWidth(const TTF_Font *font);
char *TTF_FontFaceFamilyName(const TTF_Font *font);
char *TTF_FontFaceStyleName(const TTF_Font *font);
int TTF_GlyphIsProvided(TTF_Font *font, Uint16 ch);
int TTF_GlyphIsProvided32(TTF_Font *font, Uint32 ch);
int TTF_GlyphMetrics(TTF_Font *font, Uint16 ch, int *minx, int *maxx, int *miny, int *maxy, int *advance);
int TTF_GlyphMetrics32(TTF_Font *font, Uint32 ch, int *minx, int *maxx, int *miny, int *maxy, int *advance);
int TTF_SizeText(TTF_Font *font, const char *text, int *w, int *h);
int TTF_SizeUTF8(TTF_Font *font, const char *text, int *w, int *h);
int TTF_SizeUNICODE(TTF_Font *font, const Uint16 *text, int *w, int *h);
int TTF_MeasureText(TTF_Font *font, const char *text, int measure_width, int *extent, int *count);
int TTF_MeasureUTF8(TTF_Font *font, const char *text, int measure_width, int *extent, int *count);
int TTF_MeasureUNICODE(TTF_Font *font, const Uint16 *text, int measure_width, int *extent, int *count);
SDL_Surface *TTF_RenderText_Solid(TTF_Font *font, const char *text, SDL_Color fg);
SDL_Surface *TTF_RenderUTF8_Solid(TTF_Font *font, const char *text, SDL_Color fg);
SDL_Surface *TTF_RenderUNICODE_Solid(TTF_Font *font, const Uint16 *text, SDL_Color fg);
SDL_Surface *TTF_RenderText_Solid_Wrapped(TTF_Font *font, const char *text, SDL_Color fg, Uint32 wrapLength);
SDL_Surface *TTF_RenderUTF8_Solid_Wrapped(TTF_Font *font, const char *text, SDL_Color fg, Uint32 wrapLength);
SDL_Surface *TTF_RenderUNICODE_Solid_Wrapped(TTF_Font *font, const Uint16 *text, SDL_Color fg, Uint32 wrapLength);
SDL_Surface *TTF_RenderGlyph_Solid(TTF_Font *font, Uint16 ch, SDL_Color fg);
SDL_Surface *TTF_RenderGlyph32_Solid(TTF_Font *font, Uint32 ch, SDL_Color fg);
SDL_Surface *TTF_RenderText_Shaded(TTF_Font *font, const char *text, SDL_Color fg, SDL_Color bg);
SDL_Surface *TTF_RenderUTF8_Shaded(TTF_Font *font, const char *text, SDL_Color fg, SDL_Color bg);
SDL_Surface *TTF_RenderUNICODE_Shaded(TTF_Font *font, const Uint16 *text, SDL_Color fg, SDL_Color bg);
SDL_Surface *TTF_RenderText_Shaded_Wrapped(TTF_Font *font, const char *text, SDL_Color fg, SDL_Color bg, Uint32 wrapLength);
SDL_Surface *TTF_RenderUTF8_Shaded_Wrapped(TTF_Font *font, const char *text, SDL_Color fg, SDL_Color bg, Uint32 wrapLength);
SDL_Surface *TTF_RenderUNICODE_Shaded_Wrapped(TTF_Font *font, const Uint16 *text, SDL_Color fg, SDL_Color bg, Uint32 wrapLength);
SDL_Surface *TTF_RenderGlyph_Shaded(TTF_Font *font, Uint16 ch, SDL_Color fg, SDL_Color bg);
SDL_Surface *TTF_RenderGlyph32_Shaded(TTF_Font *font, Uint32 ch, SDL_Color fg, SDL_Color bg);
SDL_Surface *TTF_RenderText_Blended(TTF_Font *font, const char *text, SDL_Color fg);
SDL_Surface *TTF_RenderUTF8_Blended(TTF_Font *font, const char *text, SDL_Color fg);
SDL_Surface *TTF_RenderUNICODE_Blended(TTF_Font *font, const Uint16 *text, SDL_Color fg);
SDL_Surface *TTF_RenderText_Blended_Wrapped(TTF_Font *font, const char *text, SDL_Color fg, Uint32 wrapLength);
SDL_Surface *TTF_RenderUTF8_Blended_Wrapped(TTF_Font *font, const char *text, SDL_Color fg, Uint32 wrapLength);
SDL_Surface *TTF_RenderUNICODE_Blended_Wrapped(TTF_Font *font, const Uint16 *text, SDL_Color fg, Uint32 wrapLength);
SDL_Surface *TTF_RenderGlyph_Blended(TTF_Font *font, Uint16 ch, SDL_Color fg);
SDL_Surface *TTF_RenderGlyph32_Blended(TTF_Font *font, Uint32 ch, SDL_Color fg);
int TTF_SetDirection(int direction);
int TTF_SetScript(int script);
void TTF_CloseFont(TTF_Font *font);
void TTF_Quit(void);
int TTF_WasInit(void);
int TTF_GetFontKerningSize(TTF_Font *font, int prev_index, int index);
int TTF_GetFontKerningSizeGlyphs(TTF_Font *font, Uint16 previous_ch, Uint16 ch);
int TTF_GetFontKerningSizeGlyphs32(TTF_Font *font, Uint32 previous_ch, Uint32 ch);

#ifdef __cplusplus
}
#endif

#endif /* SDL2_TTF_PROTOS */
