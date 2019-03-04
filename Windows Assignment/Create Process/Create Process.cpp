// Create Process.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <stdio.h>
#include <tchar.h>

int _tmain(int argc, TCHAR *argv[])
{
	STARTUPINFO start_info1, start_info2;
	PROCESS_INFORMATION process_info1, process_info2;

	ZeroMemory(&start_info1, sizeof(start_info1));
	start_info1.cb = sizeof(start_info1);
	ZeroMemory(&process_info1, sizeof(process_info1));

	ZeroMemory(&start_info2, sizeof(start_info2));
	start_info2.cb = sizeof(start_info2);
	ZeroMemory(&process_info2, sizeof(process_info2));

	if (argc < 3)
	{
		printf("Usage: %s [cmdline]\n", argv[0]);
		return 0;
	}


	BOOL bCreateProc1 = CreateProcess(NULL,
		argv[1],
		NULL,
		NULL,
		TRUE,
		0,
		NULL,
		NULL,
		&start_info1,
		&process_info1);

	if (!bCreateProc1)
	{
		printf("CreateProcess failed (%d).\n", GetLastError());

		return 0;
	}

	BOOL bCreateProc2 = CreateProcess(NULL,
		argv[2],
		NULL,
		NULL,
		TRUE,
		0,
		NULL,
		NULL,
		&start_info2,
		&process_info2);

	if (!bCreateProc2)
	{
		printf("CreateProcess failed (%d).\n", GetLastError());
		return 0;
	}

	HANDLE hProc[2];
	hProc[0] = process_info1.hProcess;
	hProc[1] = process_info2.hProcess;
	// Wait until child process exits.
	//WaitForSingleObject(process_info1.hProcess, INFINITE);
	WaitForMultipleObjects(2, hProc, TRUE, INFINITE);

	// Close process and thread handles. 
	CloseHandle(process_info1.hProcess);
	CloseHandle(process_info2.hThread);

	system("pause");
	return 0;

}

