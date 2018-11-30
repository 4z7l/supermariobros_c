#include<stdio.h>
#include<Windows.h>

void OpeningScene() {

	COORD pos = { 0, 20 };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	FILE * f = fopen("opening.txt", "r");
	char a[10000];
	int i = 0;
	while (!feof(f)) {
		fgets(a, 1024, f);
		printf("%s", a);
		Sleep(100);
	}
	fclose(f);

	//printf("PRESS ANY KEY TO CONTINUE");
	getchar();
	system("cls");

}
