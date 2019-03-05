// Two programs files pgm11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#define MAX_SIZE 100

using namespace std;

int main()
{
	LPTSTR fileName = TEXT("File");
	HANDLE newFileHandle = CreateFile(
		fileName,// name of the file 
		GENERIC_READ | GENERIC_WRITE, //Access mode for the file
		0, // shared mode
		NULL, //Security Attribute
		CREATE_ALWAYS, //Creation desposition
		FILE_ATTRIBUTE_NORMAL, //Flags and Attributes
		NULL //H template
	);

	if (INVALID_HANDLE_VALUE == newFileHandle)
	{
		printf("\nUnable to create or open the file\nThe error code is: %d\n", GetLastError());
	}

	LPTSTR writeData = TEXT("Hi guys. Im Aditya.");
	DWORD numberOfBytesWritten;

	BOOL writeReturnValue = WriteFile(
		newFileHandle, //Already created HANDLE variable
		writeData, //Data to be written 
		wcslen(writeData) * 2, //size in bytes
		&numberOfBytesWritten, //words written
		NULL //Over lapped attributes
	);

	if (!writeReturnValue)
	{
		printf("\nUnable to write the data\nThe error code is: %d\n", GetLastError());
	}

	else
	{
		printf("The number of bytes written is: %d\n", numberOfBytesWritten);
		printf("The data entered is: %S\n", writeData);
	}

	CloseHandle(newFileHandle);
	HANDLE newFileHandle1 = CreateFile(
		fileName,// name of the file 
		GENERIC_READ | GENERIC_WRITE, //Access mode for the file
		0, // shared mode
		NULL, //Security Attribute
		OPEN_EXISTING, //Creation desposition
		FILE_ATTRIBUTE_NORMAL, //Flags and Attributes
		NULL //H template
	);

	if (INVALID_HANDLE_VALUE == newFileHandle1)
	{
		printf("\nUnable to create or open the file\nThe error code is: %d\n", GetLastError());
	}

	WCHAR *readData = new WCHAR[MAX_SIZE];
	DWORD numberOfBytesRead;

	ZeroMemory(readData, MAX_SIZE);
	BOOL readReturnValue = ReadFile(
		newFileHandle1, //Already created HANDLE variable
		readData, //Data that is read 
		MAX_SIZE - 1, //size in bytes
		&numberOfBytesRead, //words read
		NULL //Over lapped attributes
	);

	if (!readReturnValue)
	{
		printf("\nUnable to write the data\nThe error code is: %d\n", GetLastError());
	}

	else
	{
		printf("The number of bytes read is: %d\n", numberOfBytesRead);
		printf("The data read is: %ws\n", readData);
	}

	CloseHandle(newFileHandle1);
	delete[]readData;
	system("pause");
    return 0;
}

