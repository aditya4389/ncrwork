// Thread suspend and resume.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>

using namespace std;

DWORD WINAPI function(LPVOID var)
{
	//cout << "Hello. The thread is initiated\n";
	for (int i = 0; i < 10; i++)
	{
		Sleep(1000);
		cout << i << endl;
	}
	return 0;
}

int main()
{
	DWORD ThreadVariable;
	//cout << "Enter the thread variable\n";
	//cin >> ThreadVariable;
	HANDLE threadHandler = CreateThread(NULL, 0, function, &ThreadVariable, CREATE_SUSPENDED, NULL);

	if (NULL == threadHandler)
	{
		cout << "The error code is: " << GetLastError() << endl;
	}


	DWORD resumeThread = ResumeThread(threadHandler);

	WaitForSingleObject(threadHandler, INFINITE);
	system("pause");
	return 0;
}


