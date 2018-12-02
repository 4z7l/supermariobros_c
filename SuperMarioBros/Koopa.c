#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include "info.h"

#define MAX_KOOPA_NUM 10

/*===============================Variables===============================*/
char KoopaMotion[5][TURTLE_HEIGHT * TURTLE_WIDTH];
static int isLoadedKoopa = 0;
int KoopaNum = 0;

typedef struct __koopa {
	COORD pos;
	char *KoopaState;
	int isRight;
	int isLeft;
}Koopa;


Koopa Kp[MAX_KOOPA_NUM];		//Turtle °´Ã¼

void loadKoopa(char *fileName, int motion);

void KoopaInitialize(int stage)
{

	loadKoopa("Koopa.txt", 0);
	//loadKoopa("TurtleRight.txt", 1);
	//loadKoopa("TurtleLeftWalk.txt", 2);
	//loadKoopa("TurtleRightWalk.txt", 3);


	switch (stage)
	{
	case 1:
		KoopaNum = 1;

		for (int i = 0; i < KoopaNum; i++)
		{
			Kp[i].KoopaState = KoopaMotion[0];
			Kp[i].pos.X = 300 + i * 40;
			Kp[i].pos.Y = 60;
			Kp[i].isLeft = 1;
			Kp[i].isRight = 0;
		}
		break;
	default:
		break;
	}
}

void loadKoopa(char *fileName, int motion)
{
	char tmp;
	int k = 0;
	FILE *fp = fopen(fileName, "r");

	for (int y = 0; y < KOOPA_HEIGHT; y++)
	{
		for (int x = 0; x < KOOPA_WIDTH + 1; x++)
		{
			fscanf(fp, "%c", &tmp);
			if ((tmp >= 'A' && tmp <= 'z') || (tmp >= '0' && tmp <= '0'))
				KoopaMotion[motion][x + KOOPA_WIDTH * y] = tmp;
		}
	}
	fclose(fp);
}

