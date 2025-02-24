#include"v.h"

//full_versions
static int (*p_ux)();
extern char input[9][100];
char inpur[100] = {0,};

int Funsion_StartShell() {
	//HMODULE h_aux_dll = LoadLibrary(L"aux.dll");
	//p_ux = (int(*)())GetProcAddress(h_aux_dll, "AUX");
	//(*p_ux)();
	printf("LinkingEnvironment %d\n", le_ver);
	Funsion_shell();
}

int Funsion_shell() {
	static char* babad_gugas;
	//inp = input;
	while (1) {
		printf("_\n");
		getchar();
		scanf_s("%[^\n]", inpur, sizeof(inpur));
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
	}
}