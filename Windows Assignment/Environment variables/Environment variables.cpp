// Environment variables.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <tchar.h>

using namespace std;

void dumpEnvironmentVariables(TCHAR *env[])
{
	TCHAR **tchar = env;
	int c = 0;
	printf("The environment variables are:\n");
	while (*tchar != NULL)
	{
		c++;
		printf("%d->%s\n", c, *tchar);
		(tchar)++;
	}
}

int main(int argc, TCHAR *argv[], TCHAR *env[])
{
	dumpEnvironmentVariables(env);
	TCHAR environmentVariables[] = TEXT("%SystemRoot%");
	TCHAR buffer[MAX_PATH];
	DWORD returnValue;
	returnValue = ExpandEnvironmentStrings(environmentVariables, buffer, MAX_PATH);
	if (!returnValue)
	{
		printf("%d\n", GetLastError());
	}
	_tprintf(TEXT("%s\n"), buffer);
	system("pause");
    return 0;
}

