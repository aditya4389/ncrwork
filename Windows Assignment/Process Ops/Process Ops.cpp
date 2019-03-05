// Process Ops.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>

using namespace std;

DWORD WINAPI function(LPVOID var)
{
	cout << "Hello. The thread is initiated\n";
	return 0;
}

int main()
{
	DWORD ThreadVariable;
	cout << "Enter the thread variable\n";
	cin >> ThreadVariable;
	HANDLE threadHandler = CreateThread(NULL, 0, function, &ThreadVariable, 0, NULL);

	if (NULL == threadHandler)
	{
		cout << "The error code is: " << GetLastError() << endl;
	}
	WaitForSingleObject(threadHandler, INFINITE);
	cout << "Current Process ID: " << GetCurrentProcessId() << endl;
	cout << "Current Thread ID: " << GetCurrentThreadId() << endl;
	cout << "Process ID: " << GetProcessId << endl;
	cout << "Thread ID: " << GetThreadId << endl;
	cout << "The process ID of the thread is: " << GetProcessIdOfThread << endl;
	system("pause");
    return 0;
}

