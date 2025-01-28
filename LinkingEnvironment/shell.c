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
	while (1) {
		scanf("%[^\n]", inpur);
		sscanf("%s", input[0]);
		if (strcmp(input[0], "test") == 0) {
			printf("print\n");
		}
		else if (strcmp(input[0], "ver") == 0) {
			//full_versions(le_ver, sub_ver, build_ver);
			printf("LinkingEncironment version %d.%d.%d", le_ver, sub_ver, build_ver);
		}
	}
}