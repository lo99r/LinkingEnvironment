#include"v.h"
extern char argp[9][100];
//char argp[9][100] = {0,};

int cursorXY_(int xx, int yy) {
	//f
	COORD Cur;
	Cur.X = xx;
	Cur.Y = yy;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}
// ,
int main(int argc, char* argv[9]) {
	system("title Starting LE6...\nmode con:cols=60 lines=100");
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = 0;
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
		scanf("%[^ ]", argp[1]);
		if (strcmp(argp[1], "set") == 0) {
			Funsion_StartShell();
		}
	}
}