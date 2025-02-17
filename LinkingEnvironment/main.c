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
	logfile = fopen("logfile.txt", "a+");
	fprintf_s(logfile, "logfile: ta\'ahusun\n");
	system("title Starting LE6...\nmode con:cols=60 lines=100");
	fprintf_s(logfile, "logfile: used system funsion\nyansau: \"title Starting LE6...\\nmode con:cols=60 line=100\"\n");
	printf("Starting LE6...");
	fprintf_s(logfile, "logfile: printed \"Starting LE6...\"\n");
	CONSOLE_CURSOR_INFO ConsoleCursor;
	fprintf_s(logfile, "logfile: tamirdalo CONSOLE_CURSOR_INFO ConsoleCursor\n");
	ConsoleCursor.bVisible = 1;
	fprintf_s(logfile, "logfile: tabibajo ConsoleCursor.bVisible: %d\n", ConsoleCursor.bVisible);
	ConsoleCursor.dwSize = 1;
	fprintf_s(logfile, "logfile: tabibajo ConsoleCursor.dwSize: %d\n", ConsoleCursor.dwSize);
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	fprintf_s(logfile, "logfile: tamirdalo HANDLE consoleHandle: GetStdHandle(STD_OUTPUT_HANDLE)\n");
	SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
	fprintf_s(logfile, "logfile: used SetConsoleCursorInfo funsion\nyansau: consoleHandle & &ConsoleCursor\n");
	cursorXY_(0, 0);
	fprintf_s(logfile, "logfile: used cursorXY_ funsion\nyansau: 0 & 0\n");
	//curposgens(0, 0);
	//1//system("");
	if (argc >= 2) {
		strcpy(argp[1], argv[1]);
		fprintf_s(logfile, "logfile: used strcpy funsion\nyansau: argp[1] & argv\n");
	}
	else {
		printf("gabapsen argc ashaxen. nuduruunam.\n");
		fprintf_s(logfile, "logfile: printed \"gabapsen argc ashaxen.nuduruunam\"\n");
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
	fprintf_s(logfile, "logfile: exitingggused cursorXY_ funsion\nyansau: 0 & 0\n");
	fclose(logfile);
	return 0;
}