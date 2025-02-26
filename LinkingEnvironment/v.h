// 헤더에서 만든 변수 extern 같은걸로 빼보세요 여긴 선언만 두고
//?
#pragma once
#ifndef _V_H
#define _V_H
#include"version.h"

#define da 1

#define _CRT_SECURE_NO_WARNINGS

//made in china

#include<stdio.h>//include "stdio.h"
#include<stdlib.h>
#include<conio.h>//include "conio.h"
//#include<stdlib.h>//include "stdlib.h"
#include<math.h>//include "math.h"
#include<string.h>//include "string.h"
#include<windows.h>//include "windows.h"
#include<process.h>
#include<io.h>

#define clss system("cls")
#define colors(backer, downer) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (backer * 16) + downer)
#define darkmodes system("0f")
#define whitemodes system("f0")
#define token(kokk) printf("%02x", kokk)
//#define typers 0x18//1319
#define curposgens(x, y) SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {(short)x, (short)y})
#define ands(hexbinn) (hexbinn == 0) ? 0 : ((hexbinn == 1) ? 0 : ((hexbinn == 2) ? 0 : 1)))
#define ors(hexbinn) (hexbinn == 0) ? 0 : ((hexbinn == 1) ? 1 : ((hexbinn == 2) ? 1 : 1)))
#define threads(toroop) _beginthreadex(NULL, 0, toroop, 0, 0, NULL);

//unsigned _stdcall

typedef struct system {
	struct var {
		int valing[100];
		char test[100];
	}Var3X;
}system_1;

typedef enum creamType {
	num,
	bul
}CreamType;

//char diskselet;

int Funsion_shell(int siu, char string[100]);
int Funsion_StartShell(int siu, char carss[100]);
unsigned _stdcall Funsion_InputLiap();
int Funsion_InputPrompt(int siu);
int Funsion_FileFind(int siu, char files[100]);

#endif