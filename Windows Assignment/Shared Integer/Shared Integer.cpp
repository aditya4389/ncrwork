// Shared Integer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>

using namespace std;

int count1 = 0;

DWORD WINAPI func(LPVOID var)
{
		count1++;
		cout << endl << "T1: " << count1 << endl;
	
	return 0;
}
DWORD WINAPI func1(LPVOID var)
{
		count1++;
		cout << endl << "T2: " << count1 << endl;
	return 0;
}

int main()
{
	DWORD ThreadVariable;
	HANDLE threadHandler = CreateThread(NULL, 0, func, &ThreadVariable, 0, NULL);

	if (NULL == threadHandler)
	{
		cout << "The error code is: " << GetLastError() << endl;
	}

	DWORD ThreadVariable1;
	HANDLE threadHandler1 = CreateThread(NULL, 0, func1, &ThreadVariable1, 0, NULL);

	if (NULL == threadHandler1)
	{
		cout << "The error code is: " << GetLastError() << endl;
	}

	cout << "Main: " << count1 << endl;

	system("pause");
    return 0;
}

