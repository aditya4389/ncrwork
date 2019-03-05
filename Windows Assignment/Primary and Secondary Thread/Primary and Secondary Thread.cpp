// Primary and Secondary Thread.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>

using namespace std;

DWORD lpExitCode = 0;

DWORD WINAPI function(LPVOID var)
{
	cout << "Hello. The thread is initiated \n";
	ExitThread(lpExitCode);
	return 0;
}

int main()
{
	DWORD ThreadVariable;
	//cout << "Enter the thread variable\n";
	// >> ThreadVariable;
	HANDLE threadHandler = CreateThread(NULL, 0, function, &ThreadVariable, 0, NULL);

	if (NULL == threadHandler)
	{
		cout << "The error code is: " << GetLastError() << endl;
	}

	BOOL resultExitCode = GetExitCodeThread(threadHandler, &lpExitCode);

	WaitForSingleObject(threadHandler, INFINITE);
	if (resultExitCode == 0)
	{
		cout << "The thread is not terminated properly\n";
	}
	else
		cout << "The thread is terminated properly\nExit code is: " << lpExitCode << endl;
	system("pause");
	return 0;
}
