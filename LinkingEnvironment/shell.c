#include"v.h"

//full_versions
static int (*p_ux)();
static int (*pro_rodecc)();
static int (*str_rodecc)(char);
static int(*int_rodecc)(int);
extern char input[9][100];
char inpur[100] = {0,};
extern char bad_input[100];
extern FILE* logfile;
int shell_Exit = 0;
int sheller = 0;
FILE* shell_ScriptFile;
HMODULE le_aux;
HMODULE LEPlud;
HMODULE LashnaScript;

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
	else if (siu == 1) {
		shell_ScriptFile = fopen(carss, "r");
		if (shell_ScriptFile == NULL) {
			printf("error\n");
			system("pause\n");
		}
		while (1) {
			shell_Exit = Funsion_FileFind(siu, carss[100]);
		}
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
		if (strcmp(input[0], "help") == 0) {
			printf("help\nver\nopsiontest\nexit\n");
		}
		else if (strcmp(input[0], "ver") == 0) {
			//full_versions(le_ver, sub_ver, build_ver);
			printf("LinkingEncironment version %d.%d.%d\n", le_ver, sub_ver, build_ver);
		}
		else if (strcmp(input[0], "opsiontest") == 0) {
			//sscanf_s(inpur, "%s", input[1], sizeof(input[1]));
			strcpy(input[1], babad_gugas);
			if (strcmp(input[1], "opsiontest") == 0) {
				printf("t\n");
			}
		}
		else if (strcmp(input[0], "dll") == 0) {
			//
			strcpy(input[1], babad_gugas);
			babad_gugas = strtok(input[1], " ");
			strcpy(input[2], babad_gugas);
			if (strcmp(input[2], "LashnaScript") == 0) {
				LashnaScript = LoadLibrary(L"LashnaScript.dll");
			}
			//le_aux = LoadLibrary(L"le_aux.dll");
			//LEPlud = LoadLibrary(L"LEPlud.dll");
			//FreeLibrary(le_aux);
			//FreeLibrary(LEPlud);
		}
		else if (strcmp(input[0], "exit") == 0) {
			return 1;
		}
		else {
			printf("this tokens is not comand...\n");
		}
		break;
	}
	return 0;
}