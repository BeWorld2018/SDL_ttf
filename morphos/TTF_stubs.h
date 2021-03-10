/*
  Simple DirectMedia Layer
  Copyright (C) 1997-2014 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

#undef STUB

#if defined(GENERATE_STUBS)
#define STUB(name) extern int name(); int __saveds LIB_##name() { return name(); }
#elif defined(GENERATE_POINTERS)
#define STUB(name) (APTR)&LIB_##name ,
#else
#define STUB(name) extern int LIB_##name();
#endif

	STUB(TTF_Linked_Version)
	STUB(TTF_ByteSwappedUNICODE)
	STUB(TTF_Init)
	STUB(TTF_OpenFont)
	STUB(TTF_OpenFontIndex)
	STUB(TTF_OpenFontRW)
	STUB(TTF_OpenFontIndexRW)
	STUB(TTF_OpenFontDPI)
	STUB(TTF_OpenFontIndexDPI)
	STUB(TTF_OpenFontDPIRW)
	STUB(TTF_OpenFontIndexDPIRW)
	STUB(TTF_SetFontSize)
	STUB(TTF_SetFontSizeDPI)
	STUB(TTF_GetFontStyle)
	STUB(TTF_SetFontStyle)
	STUB(TTF_GetFontOutline)
	STUB(TTF_SetFontOutline)
	STUB(TTF_GetFontHinting)
	STUB(TTF_SetFontHinting)
	STUB(TTF_FontHeight)
	STUB(TTF_FontAscent)
	STUB(TTF_FontDescent)
	STUB(TTF_FontLineSkip)
	STUB(TTF_GetFontKerning)
	STUB(TTF_SetFontKerning)
	STUB(TTF_FontFaces)
	STUB(TTF_FontFaceIsFixedWidth)
	STUB(TTF_FontFaceFamilyName)
	STUB(TTF_FontFaceStyleName)
	STUB(TTF_GlyphIsProvided)
	STUB(TTF_GlyphIsProvided32)
	STUB(TTF_GlyphMetrics)
	STUB(TTF_GlyphMetrics32)
	STUB(TTF_SizeText)
	STUB(TTF_SizeUTF8)
	STUB(TTF_SizeUNICODE)
	STUB(TTF_MeasureText)
	STUB(TTF_MeasureUTF8)
	STUB(TTF_MeasureUNICODE)
	STUB(TTF_RenderText_Solid)
	STUB(TTF_RenderUTF8_Solid)
	STUB(TTF_RenderUNICODE_Solid)
	STUB(TTF_RenderText_Solid_Wrapped)
	STUB(TTF_RenderUTF8_Solid_Wrapped)
	STUB(TTF_RenderUNICODE_Solid_Wrapped)
	STUB(TTF_RenderGlyph_Solid)
	STUB(TTF_RenderGlyph32_Solid)
	STUB(TTF_RenderText_Shaded)
	STUB(TTF_RenderUTF8_Shaded)
	STUB(TTF_RenderUNICODE_Shaded)
	STUB(TTF_RenderText_Shaded_Wrapped)
	STUB(TTF_RenderUTF8_Shaded_Wrapped)
	STUB(TTF_RenderUNICODE_Shaded_Wrapped)
	STUB(TTF_RenderGlyph_Shaded)
	STUB(TTF_RenderGlyph32_Shaded)
	STUB(TTF_RenderText_Blended)
	STUB(TTF_RenderUTF8_Blended)
	STUB(TTF_RenderUNICODE_Blended)
	STUB(TTF_RenderText_Blended_Wrapped)
	STUB(TTF_RenderUTF8_Blended_Wrapped)
	STUB(TTF_RenderUNICODE_Blended_Wrapped)
	STUB(TTF_RenderGlyph_Blended)
	STUB(TTF_RenderGlyph32_Blended)
	STUB(TTF_SetDirection)
	STUB(TTF_SetScript)
	STUB(TTF_CloseFont)
	STUB(TTF_Quit)
	STUB(TTF_WasInit)
	STUB(TTF_GetFontKerningSize)
	STUB(TTF_GetFontKerningSizeGlyphs)
	STUB(TTF_GetFontKerningSizeGlyphs32)
