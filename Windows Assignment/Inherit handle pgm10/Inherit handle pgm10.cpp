// Inherit handle pgm10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>

using namespace std;

STARTUPINFO startUpInfo;
PROCESS_INFORMATION process_Information;
SECURITY_ATTRIBUTES securityAttribute;

int main()
{

	ZeroMemory(&securityAttribute, sizeof(securityAttribute));

	securityAttribute.bInheritHandle = TRUE;

	HANDLE newEvent = CreateEvent(&securityAttribute, FALSE, FALSE, TEXT("AdityaEvent"));

	if (NULL == newEvent)
	{
		cout << "The event is not created\nThe error code is: " << GetLastError();
	}

	ZeroMemory(&startUpInfo, sizeof(startUpInfo));
	ZeroMemory(&process_Information, sizeof(process_Information));

	BOOL processReturn = CreateProcess(TEXT("D:/WinObj/Winobj.exe"), NULL, NULL, NULL, TRUE, 0, NULL, NULL, &startUpInfo, &process_Information);

	if (0 == processReturn)
	{
		cout << "Process not created\nThe error code is: " << GetLastError() << endl;
	}

	system("pause");
    return 0;
}

