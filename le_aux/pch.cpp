// pch.cpp: 미리 컴파일된 헤더에 해당하는 소스 파일

#include "pch.h"
FILE* scriptFile;
static char* point_Prompt;
int scipt_Nabnad();
char prompt_Var[9][100] = { 0, };
char prompt_Set[260] = { 0, };
int script_Return = 0;

#define a 32
#define op 64

// 미리 컴파일된 헤더를 사용하는 경우 컴파일이 성공하려면 이 소스 파일이 필요합니다.
extern "C" __declspec(dllexport) int LEscript(char string[100]) {
	//wanahen zuaknauii at kiwold program anas
	//printf("test\n");
	scriptFile = fopen(string, "r");
	scipt_Nabnad();
}

//extern "C" __declspec(dllexport) 
int scipt_Nabnad() {
	while (1) {
		fscanf_s(scriptFile, "%[^\n]", prompt_Set, 260);
		point_Prompt = strtok(prompt_Set, " ");
		//prompt[0]
		strcpy(prompt_Var[0], point_Prompt);
		if (strcmp(prompt_Set, "print") == 0) {
			//printf("%s", prompt_Var[0]);
			return (int)prompt_Set;
		}
		break;
	}
	return 0;
}

int forReturn = 0;

extern "C" __declspec(dllexport) int script_Print(char string[100]) {
	for (int i = 0; i <= 100; i++) {
		if (string[i] == '$') {
			forReturn = 2002;
			break;
		}
		printf("%c", string[i]);
	}
}