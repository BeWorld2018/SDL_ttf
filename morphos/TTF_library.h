#ifndef SDL_TTF_LIBRARY_H
#define SDL_TTF_LIBRARY_H

#ifndef DOS_DOS_H
#include <dos/dos.h>
#endif

#ifndef EXEC_LIBRARIES_H
#include <exec/libraries.h>
#endif

#ifndef EXEC_SEMAPHORES_H
#include <exec/semaphores.h>
#endif

#define SAVEDS __saveds

#if defined(__PPC__)
#define __TEXTSEGMENT__ __attribute__((section(".text")))
#else
#define __TEXTSEGMENT__
#endif

#include <SDL_ttf.h>

struct CTDT
{
	int	(*fp)(void);
	long	priority;
};

struct HunkSegment
{
	unsigned int Size;
	struct HunkSegment *Next;
};

struct TaskNode
{
	struct MinNode Node;
	struct Task *Task;
};

struct SDL2TTFLibrary
{
	struct Library Library;
	UWORD          Alloc;
	APTR           DataSeg;	   /* DON'T CHANGE POSITION */

	ULONG                  DataSize;
	struct SDL2TTFLibrary *Parent;
	BPTR                   SegList;
	struct ExecBase       *MySysBase;
	struct DosLibrary     *MyDOSBase;

	union
	{
		struct MinList TaskList;
		struct TaskNode TaskNode;
	} TaskContext;

	// library management

	struct SignalSemaphore Semaphore;
	APTR ctdtlist;
	APTR last_ctdt;
};

#endif /* SDL_TTF_LIBRARY_H */
