// Count e's.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int count = 0, i = 0, j = 0;
	const char * s[] = { "we will teach you how to ", "Move a mountain ", "Level a building ", "Erase the past ", "Make a million " };
	int len = sizeof(s) / sizeof(char*);
	for (i = 0; i < len; i++)
	{
		for (j = 0; s[i][j] != '\0'; j++)
		{
			if (s[i][j] == 'e' || s[i][j] == 'E')
			{
				count++;
			}
		}
	}
	cout << "\nThe count od e's is: " << count;
	system("pause");
	return 0;
}

