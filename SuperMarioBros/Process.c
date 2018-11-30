#include <windows.h> 
#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 
#include <process.h>

#include "info.h"

/*===============================Variables===============================*/

extern HANDLE  hRunMutex;
/* A pointer to type INPUT_RECORD, used to point to a buffer of INPUT_RECORD structs */
INPUT_RECORD *eventBuffer;
extern isRunning;

/*===============================Functions===============================*/

/* Read console input buffer and return malloc'd INPUT_RECORD array */
DWORD getInput(INPUT_RECORD **eventBuffer)
{
	/* Variable for holding the number of current events, and a point to it */
	DWORD numEvents = 0;

	/* Variable for holding how many events were read */
	DWORD numEventsRead = 0;

	/* Put the number of console input events into numEvents */
	GetNumberOfConsoleInputEvents(getReadHandle(), &numEvents);

	if (numEvents) /* if there's an event */
	{
		/* Allocate the correct amount of memory to store the events */
		*eventBuffer = malloc(sizeof(INPUT_RECORD) * numEvents);

		/* Place the stored events into the eventBuffer pointer */
		ReadConsoleInput(getReadHandle(), *eventBuffer, numEvents, &numEventsRead);
	}

	/* Return the amount of events successfully read */
	return numEventsRead;
}
extern int isGameOver;
extern int nextStage;
void runGame() {

	/* Used for indexing the eventBuffer */
	DWORD i;

	int write = NO;

	/* Variable for holding how many events were read */
	DWORD numEventsRead = 0;

	// if write == YES, then re-draw screen... (flick) 
	//write = YES;

	while (1)
	{

		/*===============================SETUP===============================*/
		if (isGameOver || nextStage) {
			Sleep(3000);
			//continue;
		}

		//WaitForSingleObject(hRunMutex,1);


		/*===============================INPUT===============================*/
		/* Get the input and number of events successfully obtained */
		numEventsRead = getInput(&eventBuffer);

		/* if more than 0 are read */
		if (numEventsRead)
		{
			/* loop through the amount of records */
			for (i = 0; i < numEventsRead; i++)
			{
				/* check each event */
				switch (eventBuffer[i].EventType)
				{

				case KEY_EVENT:
					switch (eventBuffer[i].Event.KeyEvent.wVirtualKeyCode)
					{

					case VK_ESCAPE:
						return 0;

					case 'Q':
						drawRandomPixelScreen();
						break;
					case 'M':
						if (eventBuffer[i].Event.KeyEvent.bKeyDown == 0)
						{
							scoreUp(1);
							//nextStage = 1;
						}
						//drawMap();
						break;
					case 'N':
						if (eventBuffer[i].Event.KeyEvent.bKeyDown == 0)
						{
							drawStage();
						}
						break;
					case 'C':
						clearBuffer();
						break;
					case 'D':
						Mario_Move(R);
						setMarioJumpDirection(RIGHT);
						if (eventBuffer[i].Event.KeyEvent.bKeyDown == 0)
						{
							setMarioJumpDirection(UP);
						}
						break;
					case 'A':
						Mario_Move(L);
						setMarioJumpDirection(LEFT);
						if (eventBuffer[i].Event.KeyEvent.bKeyDown == 0)
						{
							setMarioJumpDirection(UP);
						}
						break;

					case 'L':
						if (eventBuffer[i].Event.KeyEvent.bKeyDown != 0)
						{
							setMarioJump(YES);
						}
						break;
					case 'R':
						reDrawScreen();
						break;
					case 'X':

						isRunning = 1;

						/* If keypress was a keydown event, not keyup */
						if (eventBuffer[i].Event.KeyEvent.bKeyDown == 0)
						{
							isRunning = 0;
						}
						break;
					}
					break;

				}
			}
			/* Delete your used INPUT_RECORD array */
			free(eventBuffer);
		}

		/*===============================DRAW===============================*/


		/* If write is 1, meaning the screen needs to be updated */
		if (write)
		{
			/* Write our character buffer (a single dimensional array) to the console buffer */
			//WriteConsoleOutputA(wHnd, consoleBuffer, characterBufferSize, characterPosition, &consoleWriteArea);
			reDrawScreen();
			write = NO;
		}
	}
}