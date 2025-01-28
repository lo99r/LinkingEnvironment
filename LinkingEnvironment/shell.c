#include"v.h"

//full_versions
static int (*p_ux)();
extern char input[9][100];
char inpur[100];

int Funsion_StartShell() {
	//HMODULE h_aux_dll = LoadLibrary(L"aux.dll");
	//p_ux = (int(*)())GetProcAddress(h_aux_dll, "AUX");
	//(*p_ux)();
	scanf_s("%[^\n]", inpur, sizeof(inpur));
	sscanf_s("%s", input[0], sizeof(input));
	if (strcmp(input[0], "test")) {
		printf("print\n");
	}
}