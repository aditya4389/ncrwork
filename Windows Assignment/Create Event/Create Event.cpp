// Create Event.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#define MAX_SIZE 100

using namespace std;

int main()
{
	/*wchar_t name[MAX_SIZE];
	cout << "Enter the name of the event to create\n";
	scanf_s("%ws", name);
	wchar_t *eventName = name;*/
	HANDLE newEvent = CreateEvent(NULL, FALSE, FALSE, TEXT("AdityaEvent"));
	//system("pause");

	if (NULL == newEvent)
	{
		cout << "The event is not created\nThe error code is: " << GetLastError();
	}
	system("pause");
    return 0;
}

