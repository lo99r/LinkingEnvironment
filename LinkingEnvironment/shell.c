#include"v.h"

//full_versions
static int (*p_ux)();
extern char input[9][100];
char inpur[100] = {0,};
extern char bad_input[100];
extern FILE* logfile;
int shell_Exit = 0;
int sheller = 0;

int Funsion_StartShell(int siu, char carss[100]) {
	//HMODULE h_aux_dll = LoadLibrary(L"aux.dll");
	//p_ux = (int(*)())GetProcAddress(h_aux_dll, "AUX");
	//(*p_ux)();
	printf("LinkingEnvironment %d\n", le_ver);
	//Funsion_shell();
	//Funsion_InputPrompt(siu);
	if (siu == 0) {
		loog:
		shell_Exit = Funsion_inputPromt(siu);
		if (shell_Exit == 1) {
			goto loogg;
		}
		goto loog;
		loogg:
	}
	else {
		//
		fprintf_s(logfile, "logfile: fayal...");
		return 0;
	}
	return 0;
}

int Funsion_InputPrompt(int siu) {
	scanf("%s", bad_input);
	sheller = Funsion_shell(siu, "");
	return sheller;
}

int Funsion_shell(int siu, char string[100]) {
	static char* babad_gugas;
	//inp = input;
	while (1) {
		printf("_\n");
		getchar();
		sscanf_s(bad_input, "%[^\n]", inpur, sizeof(inpur));
		babad_gugas = strtok(inpur, " ");
		strcpy(input[0], inpur);
		//sscanf_s(inpur, "%s", input[0], sizeof(input[0]));
		if (strcmp(input[0], "test") == 0) {
			printf("print\n");
		}
		else if (strcmp(input[0], "ver") == 0) {
			//full_versions(le_ver, sub_ver, build_ver);
			printf("LinkingEncironment version %d.%d.%d", le_ver, sub_ver, build_ver);
		}
		else if (strcmp(input[0], "opsiontest") == 0) {
			//sscanf_s(inpur, "%s", input[1], sizeof(input[1]));
			strcpy(input[1], babad_gugas);
			if (strcmp(input[1], "opsiontest") == 0) {
				printf("t");
			}
		}
		else if (strcmp(input[0], "exit") == 0) {
			return 1;
		}
		break;
	}
	return 0;
}