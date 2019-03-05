// Terminate Secondary Thread.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>

using namespace std;

DWORD lpExitCode;

DWORD WINAPI function(LPVOID var)
{
	cout << "Hello. The thread is initiated \n";
	////ExitThread(lpExitCode);
	for (int i = 0; i < 10; i++)
	{
		//cout << i << endl;
		Sleep(1000);
	}
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

	WaitForSingleObject(threadHandler, 2000);
	//Sleep(1000);
	//cout << "HI\n";
	//Sleep(1000);
	BOOL resultTerminationCode = TerminateThread(threadHandler, lpExitCode);
	
	BOOL resultExitCode = GetExitCodeThread(threadHandler, &lpExitCode);

	
	if (resultExitCode == 0)
	{
		cout << "The thread is not terminated properly\n";
	}
	else
		cout << "The thread is terminated properly\nThe exit code of the thread is: " << lpExitCode << endl;
	system("pause");
	return 0;
}