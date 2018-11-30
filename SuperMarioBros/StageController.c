#include<Windows.h>
#include<stdlib.h>
#include<stdio.h>
#include "info.h"

int stage = 42;
int world=1;
int turn = 1;
void LoadStage(int stage)
{
	playBackGroundMusic(stage/10, turn);

	consoleBufferInitialize();
	marioInitialize(stage);
	GumbaInitialize(stage);
	TurtleInitialize(stage);
	KoopaInitialize(stage);
	mapInitialize(stage);
	ScreenInitialize();
}
