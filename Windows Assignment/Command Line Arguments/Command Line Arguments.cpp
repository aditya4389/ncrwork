// Command Line Arguments.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>

using namespace std;

int main(int argc, LPTSTR *argv[])
{
	LPWSTR *random;
	random = CommandLineToArgvW(GetCommandLine(), &argc);

	if (NULL == random)
	{
		GetLastError();
	}
	else
	{
		wcout << "The command line arguments are: ";
		for (int i = 0; i < argc; i++)

		{
			wcout << random[i] << " ";
		}
		wcout << endl;
	}
	
	system("pause");
    return 0;
}

