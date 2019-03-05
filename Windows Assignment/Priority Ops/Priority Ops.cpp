// Priority Ops.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>

using namespace std;

STARTUPINFO startUpInfo;
PROCESS_INFORMATION process_Information;

DWORD lpExitCode = 0;

DWORD WINAPI function(LPVOID var)
{
	cout << "Hello. The thread is initiated successfully \n";
//	ExitThread(lpExitCode);
	return 0;
}

int main()
{
	ZeroMemory(&startUpInfo, sizeof(startUpInfo));
	ZeroMemory(&process_Information, sizeof(process_Information));

	BOOL processReturn = CreateProcess(TEXT("D:/WinObj/Winobj.exe"), NULL, NULL, NULL, TRUE, HIGH_PRIORITY_CLASS, NULL, NULL, &startUpInfo, &process_Information);

	if (0 == processReturn)
	{
		cout << "Process not created\nThe error code is: " << GetLastError() << endl;
	}

	cout << "Process created with highest priority\n";

	BOOL priority1 = SetPriorityClass(process_Information.hProcess, BELOW_NORMAL_PRIORITY_CLASS);

	if (0 == priority1)
	{
		cout << "Priority not set proprerly\n";
	}

	cout << "Process priority changed to below normal\n";

	DWORD ThreadVariable;
	//cout << "Enter the thread variable\n";
	// >> ThreadVariable;
	HANDLE threadHandler = CreateThread(NULL, 0, function, &ThreadVariable, 0, NULL);

	if (NULL == threadHandler)
	{
		cout << "Thread not created properly\nThe error code is: " << GetLastError() << endl;
	}
	BOOL threadPriority = SetThreadPriority(threadHandler, THREAD_PRIORITY_LOWEST);

	if (0 == threadPriority)
	{
		cout << "Thread priority not set properly\nThe error code is: " << GetLastError() << endl;
	}

	cout << "Thread priority set to lowest\n";

	WaitForSingleObject(threadHandler, INFINITE);
	system("pause");
	return 0;
}

