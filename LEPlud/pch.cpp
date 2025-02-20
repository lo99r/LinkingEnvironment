// pch.cpp: 미리 컴파일된 헤더에 해당하는 소스 파일

#include "pch.h"
char verfuurr[260] = { 0, };

// 미리 컴파일된 헤더를 사용하는 경우 컴파일이 성공하려면 이 소스 파일이 필요합니다.

extern "C" __declspec(dllexport) int Command_Environment_System(char Command_Prompt[260]) {
	//printf();
	//switch
	if (strcmp(Command_Prompt, "ver")) {
		sprintf(verfuurr, "%d.%d.%d.%c%d.P%03d.A%05XH%02d-%d", command_M, command_N, command_P, command_AlphabetInfo - 1 + 'a', command_AlphabetP, command_ProgramNumber, command_A, command_H, command_B); \
			//
			return (int)verfuurr;
	}
}

extern "C" __declspec(dllexport) char Command_ErrorCode(int number) {
	switch (number) {
	case 2002:
		sprintf(verfuurr, "Print: mardalaa at anas");
	}
}