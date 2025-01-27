#include"v.h"

//full_versions
static int (*p_ux)();

int Funsion_StartShell() {
	HMODULE h_aux_dll = LoadLibrary(L"aux.dll");
	p_ux = (int(*)())GetProcAddress(h_aux_dll, "AUX");
	(*p_ux)();
}