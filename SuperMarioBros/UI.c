#include<stdio.h>
#include<string.h>
#include "info.h"

static int score = 0;
char Screen[HEIGHT * WIDTH];
char Numbers[10][NUMBER_HEIGHT * NUMBER_WIDTH];


void loadTextScreen(char *fileName, int mapNum);
void loadNumber(char *fileName, char *dist, int width, int height);
void drawScore();
void clearScreen();
void setObjectToScreen(char img[], int imageWidth, int imageHeight, int xoffset, int yoffset);

static int isLoaded = 0;

void ScreenInitialize()
{
	if (!isLoaded) {
		loadTextScreen("GameOverScreen.txt", 1);
		
		
		for (int i = 0; i < 10; i++)
		{
			char num[8];
			char txt[8] = ".txt";
			num[0] = i + 48;
			num[1] = 0;
			strcat(num, txt);
			loadNumber(num, Numbers[i], NUMBER_WIDTH, NUMBER_HEIGHT);
		}
		isLoaded = 1;
	}




	drawScore();

}

void loadTextScreen(char *fileName, int mapNum)
{
	char tmp;
	int k = 0;
	FILE *fp = fopen(fileName, "r");

	for (int y = 0; y < HEIGHT; y++)
	{
		for (int x = 0; x < WIDTH + 1; x++)
		{
			fscanf(fp, "%c", &tmp);
			if (tmp >= '0' && tmp <= '9')
				Screen[x + WIDTH * y] = tmp;
		}
	}
	fclose(fp);
}

void loadNumber(char *fileName, char *dist, int width, int height)
{
	char tmp;
	int k = 0;
	FILE *fp = fopen(fileName, "r");

	for (int y = 0; y < height; y++)
	{
		for (int x = 0; x < width + 1; x++)
		{
			fscanf(fp, "%c", &tmp);
			if ((tmp >= 'A' && tmp <= 'z') || (tmp >= '0' && tmp <= '9'))
				dist[x + width * y] = tmp;
		}
	}
	fclose(fp);
}

extern char *MarioState;
extern int marioLife;
void drawGameOverScreen()
{
	clearScreen();

	if (marioLife == 0) {
		// 완전게임오버때 그릴 화면...
	}
	else {
		setObjectToScreen(MarioState, MARIO_WIDTH, MARIO_HEIGHT, 200, 60);
		setObjectToScreen(Numbers[marioLife], NUMBER_WIDTH, NUMBER_HEIGHT, 250, 65);
	}

	setConsoleBuffer(Screen, WIDTH, HEIGHT, 0, 0);
}

void setObjectToScreen(char img[], int imageWidth, int imageHeight, int xoffset, int yoffset)
{
	char tmp;

	for (int y = 0; y < imageHeight; y++)
	{
		for (int x = 0; x < imageWidth; x++)
		{
			tmp = img[x + imageWidth * y];
			if (tmp == '0') {
				continue;
			}
			Screen[(x + xoffset) + WIDTH * (y + yoffset)] = tmp;
		}
	}

}

void clearScreen() {

	for (int y = 0; y < HEIGHT; ++y)
	{
		for (int x = 0; x < WIDTH; ++x)
		{

			Screen[x  + WIDTH * y] = '0';
		}
	}
}


void scoreUp(int add) 
{
	score += add;
	if (score >= 10) {
		//lifeUp();
		score = 0;
	}
	drawScore();
}

void drawScore()
{
	deleteObjectFromMap(Numbers[score], NUMBER_WIDTH, NUMBER_HEIGHT, WIDTH - 40, 5);
	setObjectToMap(Numbers[score], NUMBER_WIDTH, NUMBER_HEIGHT, WIDTH - 40, 5);

	drawMap();
}


void drawStage()
{
	deleteObjectFromMap(Numbers[2], NUMBER_WIDTH, NUMBER_HEIGHT, WIDTH - 80, 5);
	setObjectToMap(Numbers[2], NUMBER_WIDTH, NUMBER_HEIGHT, WIDTH - 80, 5);
}