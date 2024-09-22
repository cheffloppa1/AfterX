#include <iostream>
#include <windows.h>

int main()
{
	DWORD processID = 12345; //replace here with your process ID
	HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, processID);

	DWORD ammoAddress = 0x12345678; //replace here with your ammo adress 
	int newAmmo = 10000;

	WriteProcessMemory(hProcess, (LPVOID)ammoAddress, &newAmmo, sizeof(newAmmo), NULL);

	CloseHandle(hProcess);
	return 0;
}
