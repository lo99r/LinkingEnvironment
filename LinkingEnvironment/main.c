#include"v.h"
extern char argp[9][100];
extern FILE* logfile;
//char argp[9][100] = {0,};

int cursorXY_(int xx, int yy) {
	//f
	COORD Cur;
	Cur.X = xx;
	Cur.Y = yy;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}
// ,
int main(int argc, char* argv[9]) {//al-madaj
	//logfile = fopen("logfile.txt", "a+");
	system("title Starting LE6...\nmode con:cols=60 lines=100");
	printf("Starting LE6...");
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = 1;
	ConsoleCursor.dwSize = 1;
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
	cursorXY_(0, 0);
	//curposgens(0, 0);
	//1//system("");
	if (argc >= 2) {
		strcpy(argp[1], argv[1]);
	}
	else {
		printf("gabapsen argc ashaxen. nuduruunam.\n");
		scanf("%[^\n]", argp[1]);
		if (strcmp(argp[1], "set") == 0) {
			Funsion_StartShell(0, "");
		}
		if (strcmp(argp[1], "file") == 0) {
			char himsitt[100] = { 0 };
			scanf_s("%s", himsitt, 100);
			Funsion_StartShell(1, himsitt);
		}
	}
	//fclose(logfile);
	return 0;
}